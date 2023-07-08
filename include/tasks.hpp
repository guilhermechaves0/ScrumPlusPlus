#ifndef TASKS_HPP
#define TASKS_HPP

#include <string>

class Tasks
{
    private:
        int id;
        std::string nome;
        std::string dataCriacao;
        std::string dataEntrega;
        std::string prioridade;
        enum class Status {Backlog, ToDo, Doing, Testing, Done};
        Status status;

    public:
        // constructor and destructor
        Tasks(int id, const std::string& nome, const std::string& dataCriacao, const std::string& dataEntrega, const std::string& prioridade);
        ~Tasks();

        // getters and setters
        int getId() const;
        std::string getNome() const;
        std::string getDataCriacao() const;
        std::string getDataEntrega() const;
        std::string getPrioridade() const;
        Status getStatus() const;

        // methods
        void setStatus(Status status);
};

#endif // TASKS_HPP