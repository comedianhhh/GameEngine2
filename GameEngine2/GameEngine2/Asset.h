#pragma once
#ifndef _ASSET_H_
#define _ASSET_H_

#include "Object.h"
#include"simpleJSON/json.hpp"
class Asset :public Object
{
private:
	friend class AssetManager;
protected:
	Asset();
	~Asset();
	void Load(json::JSON) override;
};

#endif // !_ASSET_H_
