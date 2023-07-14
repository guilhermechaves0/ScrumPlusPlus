#include "../include/developer.hpp"
#include <iostream>

Developer::Developer()
{
}
Developer::~Developer()
{
}

std::string Developer::getNome() const
{
    return this->nome;
}
void Developer::setNome(const std::string& nome)
{
    this->nome = nome;
}

void Developer::executarTarefa()
{
    listTasksByStatus();
    std::cout << "Digite o ID da tarefa que deseja executar: ";
    int id;
    std::cin >> id;
    /* 
    this->tasks[id].setStatus("Doing");

    this->tasks[id].setResponsavel(this->getNome());
    */

    StakeHolder::tasks[id].setStatus("Doing");

    StakeHolder::tasks[id].setResponsavel(this->getNome());
}