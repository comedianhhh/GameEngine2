#pragma once
#ifndef _TEXTUREASSET_H_
#define _TEXTUREASSET_H_


#include "Asset.h"
class TextureAsset:public Asset
{
protected:
	TextureAsset();
	~TextureAsset();
public:
	void Load(json::JSON) override;
};



#endif // !_TEXTUREASSET_H_


