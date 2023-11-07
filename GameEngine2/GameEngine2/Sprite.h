#pragma once
#ifndef _SPRITE_H_
#define _SPRITE_H_

#include "IRenderable.h"
#include "Component.h"
#include"simpleJSON/json.hpp"
class Sprite:public IRenderable,public Component
{
public:
	Sprite();
	void Load(json::JSON) override;
protected:
	void Destroy() override;
	void Update() override;
	void Render();
};

#endif // !_SPRITE_H_


