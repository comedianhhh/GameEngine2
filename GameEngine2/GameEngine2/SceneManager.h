#pragma once
#ifndef _SCENEMANAGER_H_
#define _SCENEMANAGER_H_

#include <list>
#include "Scene.h"
class SceneManager
{
private:
	friend class Engine;
	std::list<Scene*> scenes;
	Scene* activeScene;
	static SceneManager* instance;
public:
	static SceneManager& Instance()
	{
		if (instance == nullptr)
		{
			instance = new SceneManager();
		}
		return *instance;
	}
protected:
	void Initialize();
	void Destroy() 
	{
		if (instance != nullptr)
		{
			delete instance;
		}
	};
	void Update();
public:

	void AddScene(std::string _fileName);
	void RemoveScene(std::string _fileName);
	Entity* CreateEntity(Entity* _entity);
	void RemoveEntity(Entity* _entity);

	void SetActiveScene(int _id);
	Scene* GetActiveScene();
	Entity* FindEntityById(int _id);

private:
	inline explicit SceneManager()=default;
	inline ~SceneManager()=default;
	inline explicit SceneManager(SceneManager const&) = delete;
	inline SceneManager& operator=(SceneManager const&) = delete;
};

#endif // !_SCENEMANAGER_H_


