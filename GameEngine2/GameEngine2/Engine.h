#pragma once
#include <list>
#include "Entity.h"
class Engine
{
private:
	static Engine* instance;
	std::list<Entity*> entities;
	std::list<Entity*> entities_to_destroy;

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
	void GameLoop();
private:
	inline explicit Engine() = default;
	inline ~Engine() = default;
	inline explicit Engine(Engine const&) = delete;
	inline Engine& operator=(Engine const&) = delete;
};

