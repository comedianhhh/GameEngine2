#include "SceneManager.h"

SceneManager* SceneManager::instance = nullptr;



void SceneManager::Initialize()
{


}

void SceneManager::Update()
{

}

void SceneManager::AddScene(std::string _fileName)
{

}

void SceneManager::RemoveScene(std::string _fileName)
{

}

Entity* SceneManager::CreateEntity(Entity* _entity)
{
	return nullptr;
}

void SceneManager::RemoveEntity(Entity* _entity)
{
	for (auto s : scenes)
	{
		s->RemoveEntity(_entity);
	}
}

void SceneManager::SetActiveScene(int _id)
{
	for (auto s : scenes)
	{
		if (s->id == _id)
		{
			activeScene = s;
		}
	}
}

Scene* SceneManager::GetActiveScene()
{
	return activeScene;
}

Entity* SceneManager::FindEntityById(int _id)
{
	for (auto s : scenes)
	{
		return s->FindEntityById(_id);
	}
}
