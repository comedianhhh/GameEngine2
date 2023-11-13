#include "EngineCore.h"
#include "Object.h"
#include "Component.h"
#include "Sprite.h"
#include "Entity.h"
#include "Asset.h"
#include"Scene.h"
void Engine_Register()
{
	REGISTER_TYPECLASS(Object);
	REGISTER_TYPECLASS(Component);
	REGISTER_TYPECLASS(Sprite);
	REGISTER_TYPECLASS(Entity);
	REGISTER_TYPECLASS(Asset);
	REGISTER_TYPECLASS(Scene);
}
