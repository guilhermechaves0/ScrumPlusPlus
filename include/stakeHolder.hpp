#ifndef STACKHOLDER_HPP
#define STACKHOLDER_HPP

#include <string>
#include <vector>
#include <map>
#include "tasks.hpp"

class StakeHolder
{
    protected:
        std::string nome;
        std::string projeto;
        std::string team;
        static std::map<int, Tasks> tasks;
        /*std::vector<int> ids;*/

    public:
        StakeHolder();
        StakeHolder(const std::string& nome, const std::string& projeto, const std::string& team);
        ~StakeHolder();

        std::string getNome() const;
        std::string getProjeto() const;
        std::string getTeam() const;
        /* std::vector<int> getIds() const; */

        virtual void cadastrarTarefa () = 0;

        void listTasksByStatus();

        virtual void priorizarTarefa() = 0;

        virtual void executarTarefa() = 0;

        virtual void testarTarefa() = 0;

        virtual void aprovarTarefa() = 0;

        void finalizarTarefa(std::map<int, Tasks> tasks);

        void listarTarefas(std::map<int, Tasks> tasks);

        void aceitarTarefa(std::map<int, Tasks> tasks);

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

#endif // STACKHOLDER_HPP