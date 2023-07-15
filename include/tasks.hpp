#ifndef TASKS_HPP
#define TASKS_HPP

#include <string>
#include <stdexcept>

class Tasks
{
    public:
        // constructor and destructor
        Tasks(const std::string& nome, const std::string& descricao, const std::string& prioridade, const std::string& responsavel);
        Tasks();
        ~Tasks();
        enum class Status {Backlog, ToDo, Doing, Testing, Done};

        // getters and setters
        void setId(int id);

        void setNome(std::string nome);

        void setDescricao(std::string descricao);

        void setPrioridade(std::string prioridade);

        void setResponsavel(std::string responsavel);

        int getId() const;

        std::string getNome() const;

        std::string getDescricao() const;

        std::string getDataCriacao() const;

        std::string getDataEntrega() const;

        std::string getPrioridade() const;

        std::string getResponsavel() const;

        Status getStatus() const;

        // methods
        void setStatus(std::string status);
        /**static Status convertStatus(std::string& statusStr) {
        if (statusStr == "Backlog")
            return Status::Backlog;
        else if (statusStr == "ToDo")
            return Status::ToDo;
        else if (statusStr == "Doing")
            return Status::Doing;
        else if (statusStr == "Testing")
            return Status::Testing;
        else if (statusStr == "Done")
            return Status::Done;
        else {
            // Handle invalid status string
            // For example, you can throw an exception or return a default status
            throw std::runtime_error("Invalid status string");
        }
    }**/

    private:
        int id;
        std::string nome;
        std::string descricao;
        std::string dataCriacao;
        std::string dataEntrega;
        std::string prioridade;
        std::string responsavel;
        Status status;
};

#endif // TASKS_HPP