#ifndef SCRUMMASTER_HPP
#define SCRUMMASTER_HPP

#include "stakeHolder.hpp"
#include "tasks.hpp"

class ScrumMaster : public StakeHolder
{
    public:
        ScrumMaster(const std::string& nome, const std::string& projeto, const std::string& team);
        ~ScrumMaster();

        void priorizarTarefa() override;

        void executarTarefa() override;

        void testarTarefa() override;

        void aprovarTarefa() override;

};
#endif // SCRUMMASTER_HPP