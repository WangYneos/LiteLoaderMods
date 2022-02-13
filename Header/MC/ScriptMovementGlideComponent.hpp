// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MovementScriptActorComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptMovementGlideComponent : public MovementScriptActorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMOVEMENTGLIDECOMPONENT
public:
    class ScriptMovementGlideComponent& operator=(class ScriptMovementGlideComponent const&) = delete;
    ScriptMovementGlideComponent(class ScriptMovementGlideComponent const&) = delete;
    ScriptMovementGlideComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptMovementGlideComponent();
    /*
    inline  ~ScriptMovementGlideComponent(){
         (ScriptMovementGlideComponent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptMovementGlideComponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI class Scripting::Result<float> getSpeedWhenTurning() const;
    MCAPI class Scripting::Result<float> getStartSpeed() const;
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptMovementGlideComponent> bind(struct Scripting::Version);

protected:

private:

};