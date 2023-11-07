#pragma once
#ifndef _OBJECT_H_
#define _OBJECT_H_


#include"simpleJSON/json.hpp"
#include <string>
class Object
{
private:
	bool initialized=false;
	std::string name="";
	int id=0;
protected:
	Object();
	virtual ~Object();
	virtual void Initialize()=0;
	virtual void Destroy() {};
public: 
	virtual void Load(json::JSON) = 0;
	virtual bool IsInitialized()=0;
	int GetId();
	std::string& GetName();
};


#endif // !_OBJECT_H_