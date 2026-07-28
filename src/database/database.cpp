#include "database.h"
using namespace std;

bool find(string term, const map<string, map<string, string>>& database){
    return database.find(term) != database.end();
}
Definition define(string term, map<string, map<string, string>>& database){
    return Definition(term, database[term]["meaning"], database[term]["example"]);
}