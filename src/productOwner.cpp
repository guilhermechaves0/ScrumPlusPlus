#include "productOwner.hpp"
#include <iostream>

ProductOwner::ProductOwner(const std::string& nome, const std::string& projeto, const std::string& team) : StakeHolder(nome, projeto, team){}

void ProductOwner::cadastrarTarefa(int id)
{
}

void ProductOwner::priorizarTarefas(int id)
{
}