#include "../include/tester.hpp"
#include <iostream>
#include <string>

Tester::Tester(const std::string& nome, const std::string& projeto, const std::string& team) : StakeHolder(nome, projeto, team)
{
}
Tester::~Tester()
{
}

std::string Tester::getNome() const
{
    return nome;
}
void Tester::setNome()
{
    std::cout << "Digite o nome do tester: ";
    std::cin >> this->nome;
}

void Tester::executarTarefa()
{
    listTasksByStatus();
    std::cout << "Digite o ID da tarefa que deseja executar: ";
    int id;
    std::cin >> id;
    
    this->tasks[id].setStatus("Testing");

    this->tasks[id].setResponsavel(this->getNome());
}

void Tester::testarTarefa()
{
}   

void Tester::aprovarTarefa()
{
    std::string descricao;
    int id;

    std::cout << "Digite o id da tarefa a ser aprovada: ";
    
    std::cout << "Digite a descrição da tarefa: ";
    std::cin >> descricao;

    this->tasks[id].setDescricao(descricao);

    this->tasks[id].setStatus("Done");

    std::cout << "Tarefa aprovada com sucesso!" << std::endl;

}