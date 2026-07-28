#include "storage/data.h"
#include "console/console.h"
#include "database/database.h"

using namespace std;

int main(int argc, char** argv){

    map<string, map<string, string>> data = init_data();
    
    string term = parse(argv);
    Definition definition = define(term, data);
    print(definition);
}