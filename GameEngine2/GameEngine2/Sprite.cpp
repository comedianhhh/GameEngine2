#include"EngineCore.h"
#include "Sprite.h"
#include "RenderSystem.h"
IMPLEMENT_ABSTRACT_CLASS(Sprite);
Sprite::Sprite() 
{

}
void Sprite::Load(json::JSON)
{

}
void Sprite::Destroy()
{
	delete this;
}
void Sprite::Update()
{

}

void Sprite::Render()
{
	
}