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

void StakeHolder::cadastrarTarefa()
{
    std::string nome;
    std::cout << "Digite o nome da tarefa: ";
    std::cin >> nome;

    std::string descricao;
    std::cout << "Digite a descrição da tarefa: ";
    std::cin >> descricao;

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
            if (getStatusString(task.second.getStatus()) == "Backlog")
            {
                std::cout << "ID: " << task.first << std::endl;
                std::cout << "Nome: " << task.second.getNome() << std::endl;
                std::cout << "Descrição: " << task.second.getDescricao() << std::endl;
                std::cout << "Status: " << getStatusString(task.second.getStatus()) << std::endl;
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
            if (getStatusString(task.second.getStatus()) == "ToDo")
            {
                std::cout << "ID: " << task.first << std::endl;
                std::cout << "Nome: " << task.second.getNome() << std::endl;
                std::cout << "Descrição: " << task.second.getDescricao() << std::endl;
                std::cout << "Status: " << getStatusString(task.second.getStatus()) << std::endl;
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
            if (getStatusString(task.second.getStatus()) == "Doing")
            {
                std::cout << "ID: " << task.first << std::endl;
                std::cout << "Nome: " << task.second.getNome() << std::endl;
                std::cout << "Descrição: " << task.second.getDescricao() << std::endl;
                std::cout << "Status: " << getStatusString(task.second.getStatus()) << std::endl;
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
            if (getStatusString(task.second.getStatus()) == "Done")
            {
                std::cout << "ID: " << task.first << std::endl;
                std::cout << "Nome: " << task.second.getNome() << std::endl;
                std::cout << "Descrição: " << task.second.getDescricao() << std::endl;
                std::cout << "Status: " << getStatusString(task.second.getStatus()) << std::endl;
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

std::string StakeHolder::getStatusString(Tasks::Status status) {
    switch (status) {
        case Tasks::Status::Backlog:
            return "Backlog";
        case Tasks::Status::ToDo:
            return "ToDo";
        case Tasks::Status::Doing:
            return "Doing";
        case Tasks::Status::Testing:
            return "Testing";
        case Tasks::Status::Done:
            return "Done";
        default:
            return "Invalid status";
    }
}

/* std::vector<int> StakeHolder::getIds() const
{
    return ids;
} */