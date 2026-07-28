#include "data.h"
using namespace std;

map<string, map<string, string>> init_data(){
    
    map<string, map<string, string>> data;

    data["api"]["meaning"] = "Application Programming Interafce. A formal set of rules that specify how software components should interact";
    data["api"]["example"] = "one example";   

    data["open-source"]["meaning"] = "Software practice where source code is made public for anyone to use, modify and/or distribute freely";
    data["open-source"]["example"] = "two example";

    data["object oriented programming"]["meaning"] = "Programming  into objects containing state as data fields and beahavior as methods";
    data["object oriented programming"]["example"] = "three example";

    return data;
}