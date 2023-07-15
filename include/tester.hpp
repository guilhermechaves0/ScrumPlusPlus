#ifndef TESTER_HPP
#define TESTER_HPP

#include "stakeHolder.hpp"  

class Tester : public StakeHolder
{
    private:
        std::string nome;

    public:
        Tester(const std::string& nome, const std::string& descricao, const std::string& prioridade, const std::string& responsavel);
        ~Tester();

        std::string getNome() const;
        void setNome();

        void executarTarefa() override;

        void testarTarefa() override;

        void aprovarTarefa() override;
};

#endif // TESTER_HPP