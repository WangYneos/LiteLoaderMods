// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ServerPlayerInputSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYERINPUTSYSTEM
public:
    class ServerPlayerInputSystem& operator=(class ServerPlayerInputSystem const&) = delete;
    ServerPlayerInputSystem(class ServerPlayerInputSystem const&) = delete;
    ServerPlayerInputSystem() = delete;
#endif

public:
    MCAPI static struct TickingSystemWithInfo create();

protected:

private:

};