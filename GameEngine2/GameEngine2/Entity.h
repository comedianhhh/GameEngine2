#pragma once
#ifndef _COMPONENT_H_
#define _COMPONENT_H_

#include <list>
#include "Object.h"
#include "simpleJSON/json.hpp"
class Component;
class Entity:public Object
{
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


