#include "tasks.hpp"

// constructor and destructor
Tasks::Tasks(int id, const std::string& nome, const std::string& dataCriacao, const std::string& dataEntrega, const std::string& prioridade)
{
    this->id = id;
    this->nome = nome;
    this->dataCriacao = dataCriacao;
    this->dataEntrega = dataEntrega;
    this->prioridade = prioridade;
    this->status = Status::Backlog;
}

Tasks::~Tasks(){}

// getters and setters
int Tasks::getId() const
{
    return this->id;
}

std::string Tasks::getNome() const
{
    return this->nome;
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

Tasks::Status Tasks::getStatus() const
{
    return this->status;
}

void Tasks::setStatus(Status status)
{
    this->status = status;
}