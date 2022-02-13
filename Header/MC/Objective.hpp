// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Objective {

#define AFTER_EXTRA
// Add Member There
public:
    LIAPI bool setDisplay(const std::string& slotName, ObjectiveSortOrder sort);

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OBJECTIVE
public:
    class Objective& operator=(class Objective const&) = delete;
    Objective(class Objective const&) = delete;
    Objective() = delete;
#endif

public:
    MCAPI Objective(std::string const&, class ObjectiveCriteria const&);
    MCAPI class ObjectiveCriteria const& getCriteria() const;
    MCAPI std::string const& getDisplayName() const;
    MCAPI std::string const& getName() const;
    MCAPI struct ScoreInfo getPlayerScore(struct ScoreboardId const&) const;
    MCAPI bool getPlayerScoreRef(struct ScoreboardId const&, struct ScoreInfoRef&);
    MCAPI std::vector<struct ScoreboardId> getPlayers() const;
    MCAPI bool hasScore(struct ScoreboardId const&) const;
    MCAPI static std::unique_ptr<class Objective> deserialize(class CompoundTag const&, class Scoreboard&);
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class Objective const&);

protected:

private:

};