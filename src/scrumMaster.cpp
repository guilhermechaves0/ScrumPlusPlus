#include "../include/scrumMaster.hpp"
#include "tasks.hpp"

ScrumMaster::ScrumMaster(const std::string& nome, const std::string& descricao, const std::string& prioridade, const std::string& responsavel) : StakeHolder(nome, descricao, prioridade, responsavel)
{
}
ScrumMaster::~ScrumMaster()
{
}

void ScrumMaster::priorizarTarefa()
{
    prioridade = "alta";
}

void ScrumMaster::executarTarefa()
{
}

void ScrumMaster::testarTarefa()
{
}

void ScrumMaster::aprovarTarefa()
{
}