#pragma once

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
public: 
	virtual void Initialize()=0;
	virtual void Destroy() {};
	bool IsInitialized() { return initialized; };
	int GetId() { return id; };
	std::string& GetName() { return name; };
};

