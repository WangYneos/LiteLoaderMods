// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptServerActorTickEvent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERACTORTICKEVENT
public:
    class ScriptServerActorTickEvent& operator=(class ScriptServerActorTickEvent const&) = delete;
    ScriptServerActorTickEvent(class ScriptServerActorTickEvent const&) = delete;
#endif

public:
    /*0*/ virtual ~ScriptServerActorTickEvent();
    /*
    inline  ~ScriptServerActorTickEvent(){
         (ScriptServerActorTickEvent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptServerActorTickEvent@@UEAA@XZ");
        return (this->*rv)();
    }
    inline bool _serialize(class ScriptEngine& a0, class ScriptApi::ScriptObjectHandle& a1) const{
        bool (ScriptServerActorTickEvent::*rv)(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&) const;
        *((void**)&rv) = dlsym("?_serialize@ScriptServerActorTickEvent@@EEBA_NAEAVScriptEngine@@AEAVScriptObjectHandle@ScriptApi@@@Z");
        return (this->*rv)(std::forward<class ScriptEngine&>(a0), std::forward<class ScriptApi::ScriptObjectHandle&>(a1));
    }
    */
    MCAPI ScriptServerActorTickEvent();
    MCAPI void setActorId(struct ActorUniqueID const&);

protected:

private:
    MCAPI static class HashedString const mHash;

};