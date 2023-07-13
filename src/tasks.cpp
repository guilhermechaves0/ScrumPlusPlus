#include "tasks.hpp"
#include <stdexcept>
#include <iostream>
#include <string>

// constructor and destructor
/* Tasks::Tasks(int id, const std::string& nome, const std::string& dataCriacao, const std::string& dataEntrega, const std::string& prioridade)
{
    this->id = id;
    this->nome = nome;
    this->dataCriacao = dataCriacao;
    this->dataEntrega = dataEntrega;
    this->prioridade = prioridade;
    this->status = Status::Backlog;
} */

Tasks::Tasks() {}

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

std::string Tasks::getPrioridade()
{
    return this->prioridade;
}
void Tasks::setPrioridade(std::string prioridade)
{
    this->prioridade = prioridade;
}

std::string Tasks::getResponsavel()
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