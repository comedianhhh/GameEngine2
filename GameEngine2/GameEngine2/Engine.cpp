#include"EngineCore.h"
#include "Engine.h"

Engine* Engine::instance = nullptr;

extern void Engine_Register();
void Engine::GameLoop() {

	Time::Instance().Update();
	SceneManager::Instance().Update();
	RenderSystem::Instance().Update();
	AssetManager::Instance().Update();
	InputManager::Instance().Update();


}
void Engine::Initialize()
{
	Time::Instance().Initialize();
	SceneManager::Instance().Initialize();
	RenderSystem::Instance().Initialize();
	InputManager::Instance().Initialize();
	AssetManager::Instance().Initialize();
}
void Engine::Load()
{
	
}
