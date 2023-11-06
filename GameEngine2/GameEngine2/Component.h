#pragma once
#ifndef _COMPONENT_H_
#define _COMPONENT_H_

#include <string>
#include "Object.h"
class Component:public Object
{
	int value = 0;
protected:
	Component();
	~Component();
public:
	void Initialize();
	virtual const std::string& GetComponentType()=0;
	virtual void Update();

	friend class Entity;
};
#endif // !_COMPONENT_H_


