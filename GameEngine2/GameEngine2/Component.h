#pragma once
#ifndef _COMPONENT_H_
#define _COMPONENT_H_


#include "Object.h"


class Component:public Object
{
	DECLARE_ABSTRACT_DERIVED_CLASS(Component,Object);
	int value = 0;
protected:
	Component();
	~Component();
	void Initialize();
	virtual void Update()=0;
public:
	void Load(json::JSON) override;

	friend class Entity;
};
#endif // !_COMPONENT_H_


