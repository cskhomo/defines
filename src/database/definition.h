#pragma once
#include <string>

struct Definition{
    
    Definition(const std::string &t, const std::string &m, const std::string &e)
        : term(t), meaning(m), example(e){}

    std::string term;
    std::string meaning;
    std::string example;
};