#ifndef STACKHOLDER_HPP
#define STACKHOLDER_HPP

#include <string>
#include <vector>

class StakeHolder
{
    protected:
        std::string nome;
        std::string projeto;
        std::string team;
        std::vector<int> ids;

    public:
        StakeHolder(const std::string& nome, const std::string& projeto, const std::string& team);
        virtual ~StakeHolder() = default;

        std::string getNome() const;
        std::string getProjeto() const;
        std::string getTeam() const;
        std::vector<int> getIds() const;

        // scrumMaster e productOwner
        virtual void cadastrarTarefa(int id) = 0;

        // scrumMaster
        virtual void listTasksByStatus(const std::string &status) = 0;

        // productOwner
        virtual void priorizarTarefas(int id) = 0;

        // developer e tester
        virtual void executarTarefa(int id) = 0;

        // tester
        virtual void testarTarefa(int id) = 0;
        virtual void aprovarTarefa(int id) = 0;
};

#endif // STACKHOLDER_HPP