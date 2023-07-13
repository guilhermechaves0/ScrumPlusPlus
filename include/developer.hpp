#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include "stakeHolder.hpp"
#include <queue>
#include <string>
#include <map>

class Developer : public StakeHolder
{
    private:
        std::string nome;

    public:
        Developer();
        ~Developer();

        std::string getNome() const;
        void setNome(const std::string& nome);

        void executarTarefa();

        
/*         // Função para aceitar a tarefa
        void aceitarTarefa(int id);

        // Função para executar a tarefa
        void executarTarefa(int id) override;

        // Função para finalizar a tarefa
        void finalizarTarefa(int id) override;

        // Função para listar as tarefas do desenvolvedor
        void listarTarefas() override; */
};

#endif // DEVELOPER_HPP