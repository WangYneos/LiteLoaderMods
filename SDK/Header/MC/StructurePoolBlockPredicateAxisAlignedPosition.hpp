// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StructurePoolBlockPredicateAxisAlignedPosition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKPREDICATEAXISALIGNEDPOSITION
public:
    class StructurePoolBlockPredicateAxisAlignedPosition& operator=(class StructurePoolBlockPredicateAxisAlignedPosition const&) = delete;
    StructurePoolBlockPredicateAxisAlignedPosition(class StructurePoolBlockPredicateAxisAlignedPosition const&) = delete;
    StructurePoolBlockPredicateAxisAlignedPosition() = delete;
#endif

public:
    /*0*/ virtual ~StructurePoolBlockPredicateAxisAlignedPosition();
    /*1*/ virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const;
    /*
    inline bool test(class Block const& a0, class Randomize& a1) const{
        bool (StructurePoolBlockPredicateAxisAlignedPosition::*rv)(class Block const&, class Randomize&) const;
        *((void**)&rv) = dlsym("?test@StructurePoolBlockPredicateAxisAlignedPosition@@UEBA_NAEBVBlock@@AEAVRandomize@@@Z");
        return (this->*rv)(std::forward<class Block const&>(a0), std::forward<class Randomize&>(a1));
    }
    */
    MCAPI StructurePoolBlockPredicateAxisAlignedPosition(float, float, int, int, unsigned char);

protected:

private:

};