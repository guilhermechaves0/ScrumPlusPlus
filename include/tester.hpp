#ifndef TESTER_HPP
#define TESTER_HPP

#include "stakeHolder.hpp"  

class Tester : public StakeHolder
{
    private:
        std::string nome;

    public:
        Tester(const std::string& nome, const std::string& projeto, const std::string& team);
        ~Tester();

        std::string getNome() const;
        void setNome();

        void executarTarefa() override;

        void testarTarefa() override;

        void aprovarTarefa() override;
};

#endif // TESTER_HPP