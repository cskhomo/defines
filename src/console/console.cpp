#include <iostream>
#include "console.h"
#include "argh.h"

using namespace std;
using namespace argh;

string parse(char** argv){
    parser args(argv);
    vector<string> words = extract(args.pos_args());     
    return lower(join(words, " "));
}

void print(Definition definition){
    cout << "term: " << definition.term << endl;
    cout << "meaning: " << definition.meaning << endl;
    cout << "example: " << definition.example << endl;
}

vector<string> extract(vector<string> args){
    if (args.empty()) return args;   
    args.erase(args.begin());
    return args;
}

string join(const vector<string>& words, string separator){

    if (words.empty()) return "";

    if (separator.length() > 1) throw invalid_argument("Separator must be 1 character");
    
    string term = words[0];
    
    for(size_t i = 1; i < words.size(); i++){
        term += separator + words[i];
    }

    return term;
}

string lower(string word){
    for(char &c: word){c = tolower(c);}
    return word;
}
