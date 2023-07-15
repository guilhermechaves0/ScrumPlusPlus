#ifndef PRODUCTOWNER_HPP
#define PRODUCTOWNER_HPP

#include "stakeHolder.hpp"

class ProductOwner : public StakeHolder
{
    public:
        ProductOwner(const std::string& nome, const std::string& descricao, const std::string& prioridade, const std::string& responsavel);
        ~ProductOwner();

        void priorizarTarefa() override;

};

#endif // PRODUCTOWNER_HPP