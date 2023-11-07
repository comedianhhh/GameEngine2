#pragma once
#include <list>

#include "Time.h"
#include "RenderSystem.h"
#include"InputManager.h"
#include "SceneManager.h"
#include "AssetManager.h"
class Engine
{
private:
	static Engine* instance;
public :
	inline static Engine& Instance()
	{
		if (instance == nullptr)
		{
			instance = new Engine();
		}
		return *instance;
	}

	inline void Destroy()
	{
		if (instance != nullptr)
		{
			delete instance;
			instance = nullptr;
		}
	}

public:
	void Initialize();
	void GameLoop();
private:
	void Load();
private:
	inline explicit Engine() = default;
	inline ~Engine() = default;
	inline explicit Engine(Engine const&) = delete;
	inline Engine& operator=(Engine const&) = delete;

};
