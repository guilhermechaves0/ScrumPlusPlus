#ifndef TASKS_HPP
#define TASKS_HPP

#include <string>
#include <stdexcept>

class Tasks
{
    public:
        // constructor and destructor
        //Tasks(int id, const std::string& nome, const std::string& dataCriacao, const std::string& dataEntrega, const std::string& prioridade);
        Tasks();
        ~Tasks();
        enum class Status {Backlog, ToDo, Doing, Testing, Done};

        // getters and setters
        int getId() const;

        std::string getNome() const;

        std::string getDescricao() const;
        void setDescricao(std::string descricao);

        std::string getDataCriacao() const;

        std::string getDataEntrega() const;

        std::string getPrioridade();
        void setPrioridade(std::string prioridade);

        std::string getResponsavel();
        void setResponsavel(std::string responsavel);

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