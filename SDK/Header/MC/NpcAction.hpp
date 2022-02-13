// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NpcAction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCACTION
public:
    class NpcAction& operator=(class NpcAction const&) = delete;
    NpcAction(class NpcAction const&) = delete;
    NpcAction() = delete;
#endif

public:
    /*0*/ virtual ~NpcAction();
    /*
    inline bool fromJson(class Json::Value const& a0){
        bool (NpcAction::*rv)(class Json::Value const&);
        *((void**)&rv) = dlsym("?fromJson@NpcAction@@UEAA_NAEBVValue@Json@@@Z");
        return (this->*rv)(std::forward<class Json::Value const&>(a0));
    }
    inline  ~NpcAction(){
         (NpcAction::*rv)();
        *((void**)&rv) = dlsym("??1NpcAction@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI enum NpcActionMode getMode() const;
    MCAPI std::string const& getText() const;
    MCAPI enum NpcActionType getType() const;
    MCAPI bool operator!=(class NpcAction const&) const;
    MCAPI bool operator==(class NpcAction const&) const;
    MCAPI void setButtonName(std::string const&);
    MCAPI void setMode(enum NpcActionMode);
    MCAPI void setText(std::string const&);
    MCAPI static std::unique_ptr<class NpcAction> read(class Json::Value const&);

protected:
    MCAPI class Json::Value toJsonBase(class Json::Value&);

private:
    MCAPI static std::string const BUTTON_NAME_KEY;
    MCAPI static std::string const DATA_KEY;
    MCAPI static int const MAX_BUTTON_NAME_LENGTH;
    MCAPI static std::string const MODE_KEY;
    MCAPI static std::string const TEXT_KEY;
    MCAPI static std::string const TYPE_KEY;

};