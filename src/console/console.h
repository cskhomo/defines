#pragma once

#include <string>
#include <vector>
#include "../database/definition.h"

std::string parse(char** argv);
void print(Definition definition);
std::string lower(std::string word);
std::vector<std::string> extract(std::vector<std::string> args);
std::string join(const std::vector<std::string>& words, std::string separator);