// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SleepState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLEEPSTATE
public:
    class SleepState& operator=(class SleepState const&) = delete;
    SleepState(class SleepState const&) = delete;
    SleepState() = delete;
#endif

public:
    /*0*/ virtual ~SleepState();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void stop();
    /*
    inline void tick(){
        void (SleepState::*rv)();
        *((void**)&rv) = dlsym("?tick@SleepState@@UEAAXXZ");
        return (this->*rv)();
    }
    */

protected:

private:

};