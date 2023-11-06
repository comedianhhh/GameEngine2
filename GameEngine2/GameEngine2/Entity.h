#pragma once
#include <list>

#include "Object.h"

class Component;
class Entity:public Object
{
private:
	std::list<Component*> components;
public:
	Entity();
	~Entity();

	void Initialize() override;
	virtual void Update();
	void Destroy() override;

	void AddComponent(Component* _component);
	void RemoveComponent(Component* _component);
};

