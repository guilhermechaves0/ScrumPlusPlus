#ifndef PRODUCTOWNER_HPP
#define PRODUCTOWNER_HPP

#include "stakeHolder.hpp"

class ProductOwner : public StakeHolder
{
    public:
        ProductOwner(const std::string& nome, const std::string& projeto, const std::string& team);
        
        void cadastrarTarefa(int id) override;
        void priorizarTarefas(int id) override;
};

#endif // PRODUCTOWNER_HPP