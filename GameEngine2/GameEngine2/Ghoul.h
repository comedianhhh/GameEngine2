#pragma once
#include"Component.h"
class Ghoul:public Component
{
private:
	static std::string _type;
public:
	static Component* Create()
	{
		return new Ghoul();
	}
	Ghoul();
	~Ghoul();
	void Initialize() override;
	void Destroy() override;
	const std::string& GetComponentType() override;
};

