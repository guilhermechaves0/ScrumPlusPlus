#ifndef PRODUCTOWNER_HPP
#define PRODUCTOWNER_HPP

#include "stakeHolder.hpp"

class ProductOwner : public StakeHolder
{
    public:
        ProductOwner(const std::string& nome, const std::string& projeto, const std::string& team);
        ~ProductOwner();

        void priorizarTarefa() override;

};

#endif // PRODUCTOWNER_HPP