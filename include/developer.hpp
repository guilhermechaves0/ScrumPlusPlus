#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include "stakeHolder.hpp"

class Developer : public StakeHolder
{
    public:
        Developer(const std::string& nome, const std::string& projeto, const std::string& team);
        
        void executarTarefa(int id) override;
};

#endif // DEVELOPER_HPP