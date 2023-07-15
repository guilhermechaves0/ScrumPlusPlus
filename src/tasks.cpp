#include "../include/tasks.hpp"
#include <stdexcept>
#include <iostream>
#include <string>

// constructor and destructor
Tasks::Tasks(const std::string& nome, const std::string& descricao, const std::string& prioridade, const std::string& responsavel) : nome(nome), descricao(descricao), prioridade(prioridade), responsavel(responsavel)
{
}

Tasks::Tasks() {}

Tasks::~Tasks(){}

// getters and setters
int Tasks::getId() const
{
    return this->id;
}
void Tasks::setId(int id)
{
    this->id = id;
}

std::string Tasks::getNome() const
{
    return this->nome;
}
void Tasks::setNome(std::string nome)
{
    this->nome = nome;
}

std::string Tasks::getDescricao() const
{
    return this->descricao;
}
void Tasks::setDescricao(std::string descricao)
{
    this->descricao = descricao;
}

std::string Tasks::getDataCriacao() const
{
    return this->dataCriacao;
}

std::string Tasks::getDataEntrega() const
{
    return this->dataEntrega;
}

std::string Tasks::getPrioridade() const
{
    return this->prioridade;
}
void Tasks::setPrioridade(std::string prioridade)
{
    this->prioridade = prioridade;
}

std::string Tasks::getResponsavel() const
{
    return this->responsavel;
}
void Tasks::setResponsavel(std::string responsavel)
{
    this->responsavel = responsavel;
}

Tasks::Status Tasks::getStatus() const
{
    return this->status;
}

void Tasks::setStatus(std::string status)
{
    if (status == "Backlog")
        this->status = Status::Backlog;
    else if (status == "ToDo")
        this->status = Status::ToDo;
    else if (status == "Doing")
        this->status = Status::Doing;
    else if (status == "Testing")
        this->status = Status::Testing;
    else if (status == "Done")
        this->status = Status::Done;
    else {
        // Handle invalid status string
        // For example, you can throw an exception or return a default status
        throw std::runtime_error("Invalid status string");
    }
}