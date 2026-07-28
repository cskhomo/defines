#pragma once

#include "definition.h"
#include <string>
#include <map>

bool find(std::string term, const std::map<std::string, std::map<std::string, std::string>>&);
Definition define(std::string term, std::map<std::string, std::map<std::string, std::string>>&);