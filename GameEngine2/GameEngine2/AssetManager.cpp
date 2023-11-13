#include"EngineCore.h"
#include "AssetManager.h"
AssetManager* AssetManager::instance = nullptr;

void AssetManager::Initialize()
{

}

void AssetManager::Update()
{

}

void AssetManager::AddAsset(Asset* _asset)
{
	AssetManager::assets.push_back(_asset);
}

void AssetManager::RemoveAsset(Asset* asset)
{
	AssetManager::assets.remove(asset);
}
