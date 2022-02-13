// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VanillaGameModuleServer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAGAMEMODULESERVER
public:
    class VanillaGameModuleServer& operator=(class VanillaGameModuleServer const&) = delete;
    VanillaGameModuleServer(class VanillaGameModuleServer const&) = delete;
#endif

public:
    /*0*/ virtual ~VanillaGameModuleServer();
    /*1*/ virtual void init(class ServerInstance&, class Level&);
    /*2*/ virtual void initializeBehaviorStack(class Experiments const&, class IResourcePackRepository&, class ResourcePackStack&, class BaseGameVersion const&);
    /*3*/ virtual void configureLevel(class Level&, class Experiments const&, class ResourcePackManager&, class BaseGameVersion const&);
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void setupCommands(class CommandRegistry&);
    /*8*/ virtual void configureServerNetworkHandler(class ServerInstance&, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler> >);
    /*
    inline void tick(){
        void (VanillaGameModuleServer::*rv)();
        *((void**)&rv) = dlsym("?tick@VanillaGameModuleServer@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void configureDocumentation(class IGameModuleDocumentation& a0){
        void (VanillaGameModuleServer::*rv)(class IGameModuleDocumentation&);
        *((void**)&rv) = dlsym("?configureDocumentation@VanillaGameModuleServer@@UEAAXAEAVIGameModuleDocumentation@@@Z");
        return (this->*rv)(std::forward<class IGameModuleDocumentation&>(a0));
    }
    inline void configureNewPlayer(class Player& a0){
        void (VanillaGameModuleServer::*rv)(class Player&);
        *((void**)&rv) = dlsym("?configureNewPlayer@VanillaGameModuleServer@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player&>(a0));
    }
    */
    MCAPI VanillaGameModuleServer();

protected:

private:
    MCAPI void _configureWorldGen(class IWorldRegistriesProvider&, struct SpawnSettings const&, class Experiments const&, class ResourcePackManager&, class BaseGameVersion const&);
    MCAPI void _registerGameplayHandlers(class Level&) const;
    MCAPI void _registerListeners(class Level&);

};