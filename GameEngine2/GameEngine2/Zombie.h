#pragma once
#include "Component.h"
class Zombie:public Component
{
private:
	static std::string _type;
public:
	static Component* Create()
	{
		return new Zombie();
	}
	Zombie();
	~Zombie();
	void Initialize() override;
	void Destroy() override;
	const std::string& GetComponentType() override;

};

