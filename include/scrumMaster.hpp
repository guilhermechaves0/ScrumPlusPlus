#ifndef SCRUMMASTER_HPP
#define SCRUMMASTER_HPP

#include "stakeHolder.hpp"
#include "tasks.hpp"

class ScrumMaster : public StakeHolder
{
    public:
        ScrumMaster(const std::string& nome, const std::string& projeto, const std::string& team);
        
        void cadastrarTarefa() override;

};
#endif // SCRUMMASTER_HPP