#include "Engine.h"
#include "Time.h"
#include "RenderSystem.h"
Engine* Engine::instance = nullptr;
void Engine::GameLoop() {
	//Time::Instance().Update();

	for(auto& entity : entities) 
	{
		entity->Update();
	}

	for (auto& entity : entities_to_destroy) 
	{
		entities.remove(entity);
		delete entity;
	}
	RenderSystem::Instance().Update();
	/*if(Time::Instance().TotalTime() > 5.0f)
	{
		break;
	}*/
}