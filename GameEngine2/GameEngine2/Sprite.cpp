#include "Sprite.h"
#include "RenderSystem.h"
Sprite::Sprite() 
{
	RenderSystem::Instance().AddRenderable(this);
}
Sprite::~Sprite()
{
	RenderSystem::Instance().RemoveRenderable(this);
}

const std::string& Sprite::GetComponentType()
{
	static std::string _spriteClass= "Sprite";
	return _spriteClass;
}
void Sprite::Render()
{
	
}