#include <iostream>
#include "Engine.h"
#include "Zombie.h"
#include "Ghoul.h"
#include <functional>
#include <map>

#define REGISTER_CLASS(className) creatFunctionPtrs.emplace(#className, className::Create)

int main()
{
	//Engine::Instance().Initialize();
	//Engine::Instance().GameLoop();
	//Engine::Instaice().Destroy();

	
	while(true)
	{
		std::map<std::string, std::function<Component* ()>> creatFunctionPtrs;
		REGISTER_CLASS(Zombie);
		REGISTER_CLASS(Ghoul);


		std::string inputClass;
		std::cout<<"Zombie or Ghoul?"<<std::endl;
		std::cin >> inputClass;
		if (creatFunctionPtrs.find(inputClass.c_str()) != creatFunctionPtrs.end()) 
		{
			Component* comp = creatFunctionPtrs[inputClass.c_str()]();
			comp->Initialize();
			comp->Destroy();
			delete comp;
		}
	}

}


