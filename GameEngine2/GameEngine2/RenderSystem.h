#pragma once
#include <string>
#include <list>
#include "IRenderable.h"

class RenderSystem
{
private:
	std::string name;
	static RenderSystem* instance;
	int width;
	int height;
	bool fullscreen;
	std::list<IRenderable> renderables;
public:
	void Initialize();
	void Update();
protected:
	void Display();
public:
	inline static RenderSystem& Instance()
	{
		if (instance == nullptr)
		{
			instance = new RenderSystem();
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
	void Load();
	void AddRenderable(IRenderable* _renderable);
	void RemoveRenderable(IRenderable* _renderable);
private:
	inline explicit RenderSystem() = default;
	inline ~RenderSystem() = default;
	inline explicit RenderSystem(RenderSystem const&) = delete;
	inline RenderSystem& operator=(RenderSystem const&) = delete;

};

