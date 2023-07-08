#ifndef SCRUMMASTER_HPP
#define SCRUMMASTER_HPP

#include "stakeHolder.hpp"

class ScrumMaster : public StakeHolder
{
    public:
        ScrumMaster(const std::string& nome, const std::string& projeto, const std::string& team);
        
        void cadastrarTarefa(int id) override;
        void listTasksByStatus(const std::string &status) override;
};

#endif // SCRUMMASTER_HPP