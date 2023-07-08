#ifndef TESTER_HPP
#define TESTER_HPP

#include "stakeHolder.hpp"  

class Tester : public StakeHolder
{
    public:
        Tester(const std::string& nome, const std::string& projeto, const std::string& team);
        
        void executarTarefa(int id) override;
        void testarTarefa(int id) override;
        void aprovarTarefa(int id) override;
};

#endif // TESTER_HPP