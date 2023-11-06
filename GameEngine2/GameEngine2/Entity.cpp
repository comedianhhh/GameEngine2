#include "Entity.h"
Entity::Entity() {

}
Entity::~Entity() {

}
void Entity::AddComponent(Component* component)
{
	components.push_back(component);
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
	//for(auto component : components)
	//{
	//	component->Update();
	//}
}
void Entity::Initialize()
{

}
void Entity::Destroy()
{

}