#include "stakeHolder.hpp"

StakeHolder::StakeHolder(const std::string& nome, const std::string& projeto, const std::string& team) : nome(nome), projeto(projeto), team(team){}

std::string StakeHolder::getNome() const
{
    return nome;
}

std::string StakeHolder::getProjeto() const
{
    return projeto;
}

std::string StakeHolder::getTeam() const
{
    return team;
}

std::vector<int> StakeHolder::getIds() const
{
    return ids;
}