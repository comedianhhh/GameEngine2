#pragma once
#ifndef _ASSET_H_
#define _ASSET_H_

#include "Object.h"
class Asset :public Object
{
	DECLARE_ABSTRACT_DERIVED_CLASS(Asset, Object);
private:
	friend class AssetManager;
protected:
	Asset();
	~Asset();
	void Load(json::JSON) override;
};

#endif // !_ASSET_H_
