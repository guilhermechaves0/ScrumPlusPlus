#include "developer.hpp"
#include <iostream>

Developer::Developer()
{
    std::cout << "Developer criado" << std::endl;
}
Developer::~Developer()
{
    std::cout << "Developer destruído" << std::endl;
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
    
    this->tasks[id].setStatus("Doing");

    this->tasks[id].setResponsavel(this->getNome());
}