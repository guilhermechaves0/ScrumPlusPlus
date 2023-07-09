#include "scrumMaster.hpp"
#include "funcs.cpp"
#include "tasks.hpp"

ScrumMaster::ScrumMaster(const std::string& nome, const std::string& projeto, const std::string& team) : StakeHolder(nome, projeto, team){}

void ScrumMaster::cadastrarTarefa(int id, std::vector<Tasks> &tasks)
{
}

void ScrumMaster::listTasksByStatus(const std::string &status)
{
}

