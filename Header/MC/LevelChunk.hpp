// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SubChunkPacket.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LevelChunk {

#define AFTER_EXTRA
// Add Member There
public:
enum Finalization;
class Neighbors {
public:
    Neighbors() = delete;
    Neighbors(Neighbors const&) = delete;
    Neighbors(Neighbors const&&) = delete;
};
struct HardcodedSpawningArea {
    HardcodedSpawningArea() = delete;
    HardcodedSpawningArea(HardcodedSpawningArea const&) = delete;
    HardcodedSpawningArea(HardcodedSpawningArea const&&) = delete;
};
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNK
public:
    class LevelChunk& operator=(class LevelChunk const&) = delete;
    LevelChunk(class LevelChunk const&) = delete;
    LevelChunk() = delete;
#endif

public:
    MCAPI LevelChunk(class Dimension&, class ChunkPos const&, bool, enum SubChunkInitMode);
    MCAPI void _changeTerrainDataState(enum ChunkTerrainDataState, enum ChunkTerrainDataState);
    MCAPI enum ChunkTerrainDataState _getTerrainDataState() const;
    MCAPI void _onRandomTickingQueueChanged();
    MCAPI void _onTickingQueueChanged();
    MCAPI void _setGenerator(class ChunkSource*);
    MCAPI bool _setOnChunkLoadedCalled();
    MCAPI void addEntity(class WeakEntityRef);
    MCAPI void addHardcodedSpawningArea(class BoundingBox const&, enum HardcodedSpawnAreaType);
    MCAPI void addSubChunkBlockEntitiesToLevelChunk(class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor> > > >&);
    MCAPI bool applySeasonsPostProcess(class BlockSource&);
    MCAPI void changeState(enum ChunkState, enum ChunkState);
    MCAPI bool checkSeasonsPostProcessDirty();
    MCAPI bool chunkHasConvertedDataTag() const;
    MCAPI void clearDirtyTickCounters();
    MCAPI void deserializeBiomes(class IDataInput&);
    MCAPI void deserializeBlockEntities(class IDataInput&);
    MCAPI void deserializeFinalization(class IDataInput&);
    MCAPI bool deserializeKey(class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>);
    MCAPI void deserializeLoadedVersion(class IDataInput&);
    MCAPI void deserializeSubChunk(unsigned char, class IDataInput&, class std::optional<signed char>);
    MCAPI void deserializeSubChunkBlockEntities(class IDataInput&, class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor> > > >&);
    MCAPI class LevelChunkBlockActorAccessToken enableBlockEntityAccessForThisThread() const;
    MCAPI void fetchBiomes(std::vector<class Biome const* >&) const;
    MCAPI void fetchBlocks(class BlockPos const&, class BlockVolume&) const;
    MCAPI void fillBiomes(struct BiomeChunkData const&);
    MCAPI void finalizeDeserialization();
    MCAPI void finalizeSubChunkDeserialization(class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor> > > >&, class buffer_span_mut<struct SubChunk>);
    MCAPI class std::optional<class BlockPos> findExposedLightningRod(class BlockPos const&, class BlockSource&);
    MCAPI class Vec3 findLightningTarget(class BlockPos const&, class BlockSource&);
    MCAPI bool generateOriginalLighting(class ChunkViewSource&, bool);
    MCAPI class ChunkLocalHeight getAboveTopSolidBlock(class ChunkBlockPos const&, bool, bool, bool);
    MCAPI void getActors(struct ActorDefinitionIdentifier const&, class AABB const&, std::vector<class Actor* >&) const;
    MCAPI class Biome& getBiome(class ChunkBlockPos const&) const;
    MCAPI class Block const& getBlock(class ChunkBlockPos const&) const;
    MCAPI class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor> > > > const& getBlockEntities() const;
    MCAPI class BlockActor* getBlockEntity(class ChunkBlockPos const&);
    MCAPI bool getBorder(class ChunkBlockPos const&) const;
    MCAPI struct BrightnessPair getBrightness(class ChunkBlockPos const&) const;
    MCAPI struct BrightnessPair getBrightness(class ChunkBlockPos const&, struct Brightness) const;
    MCAPI signed char getCachedTemperatureNoise(class ChunkBlockPos const&);
    MCAPI std::vector<class WeakEntityRef>& getChunkEntities();
    MCAPI class Dimension& getDimension() const;
    MCAPI void getEntities(class gsl::span<class gsl::not_null<class Actor const* >, -1>, class AABB const&, std::vector<class Actor* >&, bool) const;
    MCAPI void getEntities(enum ActorType, class AABB const&, std::vector<class Actor* >&, bool) const;
    MCAPI class Actor* getEntity(struct ActorUniqueID const&) const;
    MCAPI class Block const& getExtraBlock(class ChunkBlockPos const&) const;
    MCAPI enum LevelChunk::Finalization getFinalized() const;
    MCAPI class GameEventDispatcher& getGameEventDispatcher() const;
    MCAPI class ChunkSource* getGenerator() const;
    MCAPI int getGrassColor(class ChunkBlockPos const&);
    MCAPI class DimensionHeightRange const& getHeightRange() const;
    MCAPI short getHeightmap(class ChunkBlockPos const&) const;
    MCAPI float getInterpolant(unsigned __int64, unsigned __int64) const;
    MCAPI struct Tick const& getLastTick() const;
    MCAPI class Level& getLevel() const;
    MCAPI class std::optional<enum LevelChunkFormat> getLoadedFormat() const;
    MCAPI class BlockPos const& getMax() const;
    MCAPI short getMaxAllocatedY() const;
    MCAPI class BlockPos const& getMin() const;
    MCAPI short getMinY() const;
    MCAPI short getNonAirMaxHeight() const;
    MCAPI class ChunkPos const& getPosition() const;
    MCAPI class ChunkLocalHeight getPreWorldGenHeightmap(class ChunkBlockPos const&) const;
    MCAPI class HeightmapWrapper getPreWorldGenHeightmap() const;
    MCAPI class BlockTickingQueue& getRandomTickQueue();
    MCAPI struct Brightness getRawBrightness(class ChunkBlockPos const&, struct Brightness) const;
    MCAPI std::vector<struct LevelChunk::HardcodedSpawningArea> const& getSpawningAreas() const;
    MCAPI struct std::atomic<enum ChunkState> const& getState() const;
    MCAPI struct SubChunk* getSubChunk(short);
    MCAPI struct SubChunk const* getSubChunk(short) const;
    MCAPI class Biome const& getSurfaceBiome(class ChunkBlockPos) const;
    MCAPI class BlockTickingQueue& getTickQueue();
    MCAPI class BlockTickingQueue const& getTickQueue() const;
    MCAPI class BlockPos const getTopRainBlockPos(class ChunkBlockPos const&);
    MCAPI class ChunkLocalHeight getTotalAllocatedHeight() const;
    MCAPI bool hasAnyBiomeStates() const;
    MCAPI bool hasEntitiesPendingToLoad() const;
    MCAPI bool hasEntitiesToSerialize() const;
    MCAPI bool hasEntity(class WeakEntityRef);
    MCAPI bool isBlockInChunk(class BlockPos const&) const;
    MCAPI bool isDirty() const;
    MCAPI bool isFullyLoaded() const;
    MCAPI bool isReadOnly() const;
    MCAPI bool isSkyLit(class ChunkBlockPos const&) const;
    MCAPI void legacyDeserializeBlockExtraData(class IDataInput&);
    MCAPI void legacyDeserializeTerrain(class IDataInput&);
    MCAPI void markSaveIfNeverSaved();
    MCAPI void markSaveNonActorDataIfDirty();
    MCAPI bool needsSaving(int, int) const;
    MCAPI bool needsUpgradeFix() const;
    MCAPI bool needsWallFix() const;
    MCAPI void onBlockEntityChanged();
    MCAPI class LevelChunk& operator=(class LevelChunk&&);
    MCAPI void placeCallbacks(class ChunkBlockPos const&, class Block const&, class Block const&, class BlockSource*, class std::shared_ptr<class BlockActor>);
    MCAPI void populateHeightMapDataForSubChunkPacket(short, struct SubChunkPacket::SubChunkPacketData&) const;
    MCAPI void pruneBiomesAboveHeightmap();
    MCAPI void recomputeHeightMap(bool);
    MCAPI class std::shared_ptr<class BlockActor> removeBlockEntity(class BlockPos const&);
    MCAPI bool removeEntity(class WeakEntityRef);
    MCAPI void removeHardcodedSpawningArea(enum HardcodedSpawnAreaType);
    MCAPI void runtimeRelightSubchunk(class BlockSource&, unsigned __int64, std::vector<struct SubChunkLightUpdate> const&, std::vector<class BlockPos>&);
    MCAPI void serialize2DMaps(class IDataOutput&) const;
    MCAPI void serialize3DMaps(class IDataOutput&) const;
    MCAPI void serializeBiomeStates(class IDataOutput&) const;
    MCAPI void serializeBiomes(class IDataOutput&) const;
    MCAPI void serializeBlockEntities(class IDataOutput&) const;
    MCAPI void serializeBlockEntitiesForSubChunk(class IDataOutput&, class SubChunkPos const&) const;
    MCAPI bool serializeBorderBlocks(class IDataOutput&) const;
    MCAPI void serializeEntities(class IDataOutput&, bool) const;
    MCAPI void serializeFinalization(class IDataOutput&) const;
    MCAPI bool serializeHardcodedSpawners(class IDataOutput&) const;
    MCAPI void serializeRandomTicks(class IDataOutput&) const;
    MCAPI void serializeTicks(class IDataOutput&) const;
    MCAPI void setAllLegacyBlockIDAndData(class buffer_span<struct BlockID>, class buffer_span<struct NibblePair>);
    MCAPI void setBiome2d(class Biome const&, class ChunkBlockPos const&);
    MCAPI void setBiomeFromVolume(class ClientBlockPipeline::VolumeOf<class Biome const* > const&, unsigned int);
    MCAPI class Block const& setBlock(class ChunkBlockPos const&, class Block const&, class BlockSource*, class std::shared_ptr<class BlockActor>);
    MCAPI void setBlockSimple(class ChunkBlockPos const&, class Block const&);
    MCAPI void setBlockVolume(class BlockVolume const&, unsigned int);
    MCAPI void setBorder(class ChunkBlockPos const&, bool);
    MCAPI void setCachedTemperatureNoise(class ChunkBlockPos const&, signed char);
    MCAPI void setChunkInterpolants(class LevelChunk::Neighbors const&);
    MCAPI class Block const& setExtraBlock(class ChunkBlockPos const&, class Block const&, class BlockSource*);
    MCAPI void setExtraBlockSimple(class ChunkBlockPos const&, class Block const&);
    MCAPI void setFinalized(enum LevelChunk::Finalization);
    MCAPI void setHadSerializedEntities();
    MCAPI void setPendingEntities(std::string);
    MCAPI void setPreWorldGenHeightMap(std::unique_ptr<std::vector<short>>);
    MCAPI void setSaved();
    MCAPI void setUnsaved();
    MCAPI void setupRedstoneCircuit(class BlockSource&);
    MCAPI bool shouldSaveIfNeverSaved() const;
    MCAPI bool shouldSaveNonActorDataIfDirty() const;
    MCAPI bool subChunkIsSafeReference(class BlockPos const&) const;
    MCAPI void tick(class BlockSource&, struct Tick const&);
    MCAPI void tickBlockEntities(class BlockSource&);
    MCAPI void tickBlocks(class BlockSource&);
    MCAPI class BlockPos toWorldPos(class ChunkBlockPos const&) const;
    MCAPI bool tryChangeState(enum ChunkState, enum ChunkState);
    MCAPI void trySpawnSkeletonTrap(class BlockSource&, class BlockPos const&);
    MCAPI void validateAndFixBiomeStates();
    MCAPI bool wasTickedThisTick(struct Tick const&) const;
    MCAPI ~LevelChunk();
    MCAPI static bool borderBlocksAreEnabled();
    MCAPI static class std::unique_ptr<class LevelChunk, struct LevelChunkPhase1Deleter> createNew(class Dimension&, class ChunkPos, bool, enum SubChunkInitMode);
    MCAPI static class std::array<struct BiomeChunkData, 256> deserialize2dBiomesFrom2DMaps(class IDataInput&);

protected:
    MCAPI void _deserializeBlockEntities(class IDataInput&, class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor> > > >&);
    MCAPI void _deserializeEntity(class BlockSource&, class IDataInput&, std::vector<struct ActorLink>&);
    MCAPI void _fixupCorruptedBlockActors(class std::unordered_map<class ChunkBlockPos, class std::shared_ptr<class BlockActor>, struct std::hash<class ChunkBlockPos>, struct std::equal_to<class ChunkBlockPos>, class std::allocator<struct std::pair<class ChunkBlockPos const, class std::shared_ptr<class BlockActor> > > >&, class buffer_span_mut<struct SubChunk>);
    MCAPI void _generateOriginalLighting(class ChunkViewSource&, bool);
    MCAPI void _generateOriginalLightingSubChunk(class BlockSource&, unsigned __int64, bool);
    MCAPI void _lightingCallbacks(class ChunkBlockPos const&, class Block const&, class Block const&, class BlockSource*);
    MCAPI void _placeBlockEntity(class std::shared_ptr<class BlockActor>);
    MCAPI void _reassignSubChunks(class buffer_span_mut<struct SubChunk>);
    MCAPI bool _recalcHeight(class ChunkBlockPos const&, class BlockSource*);
    MCAPI void _removeCallbacks(class ChunkBlockPos const&, class Block const&, class Block const&, class BlockSource*);
    MCAPI void _setAllBiomesFrom2D(class std::array<struct BiomeChunkData, 256>&);
    MCAPI static int const UPDATE_MAP_BIT_SHIFT;

private:
    MCAPI void _addEntityToVolumes(class gsl::not_null<class Actor* >);
    MCAPI void _deserializeBiomes(class IDataInput&, class BiomeRegistry const&);
    MCAPI void _deserializeCCsubChunks(short, class StringByteInput&);
    MCAPI bool _deserializeSubChunk(short, class StringByteInput&);
    MCAPI void _disableBlockEntityAccessForThisThread() const;
    MCAPI void _enableBlockEntityAccessForThisThread() const;
    MCAPI short _getHighestNonAirSubChunkIndex() const;
    MCAPI void _makeUniformBiomes(class Biome const&);
    MCAPI void _replaceBiomeStorage(unsigned short, std::unique_ptr<class SubChunkStorage<class Biome>>, class std::lock_guard<class std::mutex>&);
    MCAPI void _setBiome(class Biome const&, class ChunkBlockPos const&, bool);
    MCAPI void _setBiome(class Biome const&, unsigned short, unsigned short, class std::lock_guard<class std::mutex>&);

};