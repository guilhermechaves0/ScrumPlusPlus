#include "productOwner.hpp"
#include <iostream>

ProductOwner::ProductOwner(const std::string& nome, const std::string& projeto, const std::string& team) : StakeHolder(nome, projeto, team)
{
}
ProductOwner::~ProductOwner()
{
}

void ProductOwner::priorizarTarefa()
{
    std::cout << "Priorizando tarefa..." << std::endl;

    listTasksByStatus();

    std::cout << "Digite o ID da tarefa que deseja priorizar: ";
    int id;
    std::cin >> id;

    this->tasks[id] = tasks[id];

    std::cout << "Selecione a prioridade da tarefa: " << std::endl;
    std::cout << "1 - Baixa" << std::endl;
    std::cout << "2 - Média" << std::endl;
    std::cout << "3 - Alta" << std::endl;
    std::cout << "4 - Urgente" << std::endl;
    int prioridade;
    std::cin >> prioridade;

    switch (prioridade)
    {
        case 1:
            this->tasks[id].setPrioridade("Baixa");
            break;
        case 2:
            this->tasks[id].setPrioridade("Média");
            break;
        case 3:
            this->tasks[id].setPrioridade("Alta");
            break;
        case 4:
            this->tasks[id].setPrioridade("Urgente");
            break;
        default:
            std::cout << "Prioridade inválida" << std::endl;
            break;
    }
}