#pragma once
#ifndef _SPRITE_H_
#define _SPRITE_H_

#include "IRenderable.h"
#include "Component.h"
class Sprite:public IRenderable,public Component
{
public:
	Sprite();
	~Sprite();
	const std::string& GetComponentType() override;
	void Update() override;

protected:
	void Render() override;
};

#endif // !_SPRITE_H_


