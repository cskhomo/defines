#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <string>
#include "database.h"

namespace py = pybind11;

PYBIND11_MODULE(database, m){

    m.def("find", &find, R"pbdoc(
        
        remove the first element in a list of strings.

        Args:
            list[str]: words    e.g ['world', 'wide', 'web']  
        
        Returns:
            list[str]: words    e.g [wide', 'web']  

        )pbdoc"
    );

    py::class_<Definition>(m, "Definition")
        .def(py::init<std::string&, std::string&, std::string&>())
        .def_readwrite("term", &Definition::term)
        .def_readwrite("meaning", &Definition::meaning)
        .def_readwrite("example", &Definition::example);
    
    m.def("define", &define, R"pbdoc(
        
        merge a list of strings into a single string, delimit by a separator.

        Args:
            list[str]: words    e.g ['front', 'end']
            str: separator      e.g '-'      
        
        Returns:
            str: sentence       e.g 'front-end'

        )pbdoc"
    );
}