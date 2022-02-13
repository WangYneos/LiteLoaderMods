// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MineshaftPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MineshaftCrossing : public MineshaftPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINESHAFTCROSSING
public:
    class MineshaftCrossing& operator=(class MineshaftCrossing const&) = delete;
    MineshaftCrossing(class MineshaftCrossing const&) = delete;
    MineshaftCrossing() = delete;
#endif

public:
    /*0*/ virtual ~MineshaftCrossing();
    /*2*/ virtual class PoolElementStructurePiece* asPoolElement();
    /*3*/ virtual enum StructurePieceType getType() const;
    /*4*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*5*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*6*/ virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /*12*/ virtual void addHardcodedSpawnAreas(class LevelChunk&) const;
    MCAPI void _placeSupportPillar(class BlockSource&, class BoundingBox const&, int, int, int, int);

protected:

private:

};