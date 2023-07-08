#include "developer.hpp"
#include <iostream>

Developer::Developer(const std::string& nome, const std::string& projeto, const std::string& team) : StakeHolder(nome, projeto, team){}

void Developer::executarTarefa(int id)
{
}