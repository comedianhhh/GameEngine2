#pragma once
#ifndef _RENDERSYSTEM_H_
#define _RENDERSYSTEM_H_


#include <string>
#include"SDL.h"
#include <list>
#include "IRenderable.h"
#include "simpleJSON/json.hpp"
#include<fstream>

class RenderSystem
{
private:
	friend class Engine;
	std::string name;
	static RenderSystem* instance;
	int width;
	int height;
	bool fullscreen;
	std::list<IRenderable*> renderables;

protected:

	void Initialize();
	void Update();
	void Load();
public:
	inline static RenderSystem& Instance()
	{
		if (instance == nullptr)
		{
			instance = new RenderSystem();
		}
		return *instance;
	}


protected:
	inline void Destroy()
	{
		if (instance != nullptr)
		{
			delete instance;
			instance = nullptr;
		}
	}

private:

	inline explicit RenderSystem() = default;
	inline ~RenderSystem() = default;
	inline explicit RenderSystem(RenderSystem const&) = delete;
	inline RenderSystem& operator=(RenderSystem const&) = delete;

};
#endif // !_RENDERSYSTEM_H_

