#ifndef STAKEHOLDER_HPP
#define STAKEHOLDER_HPP

#include <string>
#include <vector>
#include <map>
#include "tasks.hpp"

class StakeHolder : public Tasks
{
    protected:
        std::string nome;
        std::string descricao;
        std::string prioridade;
        std::string responsavel;
        /*std::vector<int> ids;*/

    public:

        StakeHolder();
        StakeHolder(const std::string& nome, const std::string& descricao, const std::string& prioridade, const std::string& responsavel);
        virtual ~StakeHolder();
        
        static std::map<int, Tasks> tasks;

        std::string getNome() const;
        std::string getDescricao() const;
        /* std::vector<int> getIds() const; */

        void cadastrarTarefa (int id, std::vector<Tasks>& tarefas);

        void listTasksByStatus();

        virtual void priorizarTarefa() = 0;

        virtual void executarTarefa() = 0;

        virtual void testarTarefa() = 0;

        virtual void aprovarTarefa() = 0;

        std::string getStatusString(Tasks::Status status);

/*         // scrumMaster e productOwner
        virtual void cadastrarTarefa(int id, std::vector<Tasks> &tasks) = 0;

        // scrumMaster
        virtual void listTasksByStatus(const std::string &status) = 0;

        // productOwner
        virtual void priorizarTarefa(int id) = 0;

        // developer e tester
        virtual void executarTarefa(int id) = 0;

        // tester
        virtual void testarTarefa(int id) = 0;
        virtual void aprovarTarefa(int id) = 0;
*/

};

#endif // STAKEHOLDER_HPP