#include "stakeHolder.hpp"
#include <iostream>

StakeHolder::StakeHolder() {
};
StakeHolder::StakeHolder(const std::string& nome, const std::string& projeto, const std::string& team) : nome(nome), projeto(projeto), team(team){
};
StakeHolder::~StakeHolder() {
};

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

void StakeHolder::listTasksByStatus()
{
    std::cout << "Selecione o status da tarefa que deseja listar: " << std::endl;
    int status;
    std::cout << "1 - To Do" << std::endl;
    std::cout << "2 - Doing" << std::endl;
    std::cout << "3 - Testing" << std::endl;
    std::cout << "4 - Done" << std::endl;
    std::cin >> status;

    if (status == 1)
    {
        for (auto& task : this->tasks)
        {
            if (task.second.getStatus() == "Backlog")
            {
                std::cout << "ID: " << task.first << std::endl;
                std::cout << "Nome: " << task.second.getNome() << std::endl;
                std::cout << "Descrição: " << task.second.getDescricao() << std::endl;
                std::cout << "Status: " << task.second.getStatus() << std::endl;
                std::cout << "Prioridade: " << task.second.getPrioridade() << std::endl;
                std::cout << "Responsável: " << task.second.getResponsavel() << std::endl;
                std::cout << "--------------------------------------" << std::endl;
            }
        }
    }
    else if (status == 2)
    {
        for (auto& task : this->tasks)
        {
            if (task.second.getStatus() == "ToDo")
            {
                std::cout << "ID: " << task.first << std::endl;
                std::cout << "Nome: " << task.second.getNome() << std::endl;
                std::cout << "Descrição: " << task.second.getDescricao() << std::endl;
                std::cout << "Status: " << task.second.getStatus() << std::endl;
                std::cout << "Prioridade: " << task.second.getPrioridade() << std::endl;
                std::cout << "Responsável: " << task.second.getResponsavel() << std::endl;
                std::cout << "--------------------------------------" << std::endl;
            }
        }
    }
    else if (status == 3)
    {
        for (auto& task : this->tasks)
        {
            if (task.second.getStatus() == "Doing")
            {
                std::cout << "ID: " << task.first << std::endl;
                std::cout << "Nome: " << task.second.getNome() << std::endl;
                std::cout << "Descrição: " << task.second.getDescricao() << std::endl;
                std::cout << "Status: " << task.second.getStatus();
                std::cout << "Prioridade: " << task.second.getPrioridade() << std::endl;
                std::cout << "Responsável: " << task.second.getResponsavel() << std::endl;
                std::cout << "--------------------------------------" << std::endl;
            }
        }
    }
    else if (status == 4)
    {
        for (auto& task : this->tasks)
        {
            if (task.second.getStatus() == "Done")
            {
                std::cout << "ID: " << task.first << std::endl;
                std::cout << "Nome: " << task.second.getNome() << std::endl;
                std::cout << "Descrição: " << task.second.getDescricao() << std::endl;
                std::cout << "Status: " << task.second.getStatus();
                std::cout << "Prioridade: " << task.second.getPrioridade() << std::endl;
                std::cout << "Responsável: " << task.second.getResponsavel() << std::endl;
                std::cout << "--------------------------------------" << std::endl;
            }
        }
    }
    else
    {
        std::cout << "Status inválido" << std::endl;
    }

}

/* std::vector<int> StakeHolder::getIds() const
{
    return ids;
} */