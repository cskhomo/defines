#pragma once

#include <string>
#include <vector>

std::string parse(char** argv);
void print(const std::string&);
std::string lower(std::string word);
std::vector<std::string> extract(std::vector<std::string> args);
std::string join(const std::vector<std::string>& words, std::string separator);
