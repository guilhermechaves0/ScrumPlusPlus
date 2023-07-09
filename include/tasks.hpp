#ifndef TASKS_HPP
#define TASKS_HPP

#include <string>

class Tasks
{
    public:
        // constructor and destructor
        Tasks(int id, const std::string& nome, const std::string& dataCriacao, const std::string& dataEntrega, const std::string& prioridade);
        ~Tasks();
        enum class Status {Backlog, ToDo, Doing, Testing, Done};

        // getters and setters
        int getId() const;
        std::string getNome() const;
        std::string getDataCriacao() const;
        std::string getDataEntrega() const;
        std::string getPrioridade() const;
        Status getStatus() const;

        // methods
        void setStatus(Status status);
        static Status convertToStatus(const std::string& statusStr) {
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
    }

    private:
        int id;
        std::string nome;
        std::string dataCriacao;
        std::string dataEntrega;
        std::string prioridade;
        Status status;
};

#endif // TASKS_HPP