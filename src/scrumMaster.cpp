#include "scrumMaster.hpp"
#include "funcs.cpp"
#include "tasks.hpp"

ScrumMaster::ScrumMaster(const std::string& nome, const std::string& projeto, const std::string& team) : StakeHolder(nome, projeto, team){}

void ScrumMaster::cadastrarTarefa()
{
    std::string nome;
    std::cout << "Digite o nome da tarefa: ";
    std::cin >> nome;

    std::string descricao;
    std::cout << "Digite a descrição da tarefa: ";
    std::cin >> descricao;

}