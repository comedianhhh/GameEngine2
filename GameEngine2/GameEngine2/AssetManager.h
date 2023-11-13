#pragma once
#ifndef _ASSETMANAGER_H_
#define _ASSETMANAGER_H_
#include "Asset.h"
class AssetManager
{
private:
	friend class Engine;
	std::list<Asset*> assets;
	static AssetManager* instance;

public:
	static AssetManager& Instance()
	{
		if (instance == nullptr)
		{
			instance = new AssetManager();
		}
		return *instance;
	}

protected:
	void Initialize();
	void Update();
	inline void Destroy()
	{
		if (instance != nullptr)
		{
			delete instance;
			instance = nullptr;
		}
	}

public:
	void AddAsset(Asset* _asset);
	void RemoveAsset(Asset* asset);
private:

	inline explicit AssetManager()=default;
	inline ~AssetManager()= default;
	
	inline explicit AssetManager(AssetManager const&) = delete;
	inline AssetManager& operator=(AssetManager const&) = delete;


};
#endif // !_ASSETMANAGER_H_


