#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "console.h"

using namespace pybind11;

PYBIND11_MODULE(console, m){

    m.def("extract", &extract, R"pbdoc(
        
        remove the first element in a list of strings.

        Args:
            list[str]: words    e.g ['world', 'wide', 'web']  
        
        Returns:
            list[str]: words    e.g [wide', 'web']  

        )pbdoc"
    );
    
    m.def("join", &join, R"pbdoc(
        
        merge a list of strings into a single string, delimit by a separator.

        Args:
            list[str]: words    e.g ['front', 'end']
            str: separator      e.g '-'      
        
        Returns:
            str: sentence       e.g 'front-end'

        )pbdoc"
    );

    m.def("lower", &lower, R"pbdoc(
        
        convert all the characters in a string to lowercase

        Args:
            str: word           e.g 'SSH'
        
        Returns:
            str: word           e.g 'ssh'

        )pbdoc"
    );
}
