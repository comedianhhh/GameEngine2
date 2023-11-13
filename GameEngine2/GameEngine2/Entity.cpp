#include"EngineCore.h"
#include "Entity.h"

IMPLEMENT_ABSTRACT_CLASS(Entity);

Entity::Entity() {

}
Entity::~Entity() {

}

Component* Entity::CreateComponent(Component* _component)
{
	
	components.push_back(_component);
	return _component;
}
void Entity::RemoveComponent(Component* _component)
{
	for (auto component : components)
	{
		if (component == _component)
		{
			components.remove(component);
			break;
		}
	}

}
void Entity::Update()
{

}
void Entity::Initialize()
{

}
void Entity::Destroy()
{

}

void Entity::Load(json::JSON)
{

}
