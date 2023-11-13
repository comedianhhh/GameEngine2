#pragma once
#ifndef _Entity_H_
#define _Entity_H_

#include "Object.h"
class Component;
class Entity:public Object
{
	DECLARE_ABSTRACT_DERIVED_CLASS(Entity, Object);
private:
	friend class Scene;
	std::list<Component*> components;
public:

	Component* CreateComponent(Component* _component);
	void RemoveComponent(Component* _component);

protected:
	Entity();
	~Entity();
	void Initialize() override;
	virtual void Update() =0;
	void Destroy() override;
	void Load(json::JSON) override;

};
#endif // !_COMPONENT_H_


