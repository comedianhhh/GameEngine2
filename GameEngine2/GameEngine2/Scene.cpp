#include "Scene.h"

void Scene::Initialize()
{
}

void Scene::Destroy()
{
}

void Scene::Update()
{
}

void Scene::Load(json::JSON)
{
}

Entity* Scene::CreateEntity(Entity* _entity)
{
	entities.push_back(_entity);
	return _entity;
}

void Scene::RemoveEntity(Entity* _entity)
{
	for (auto entity : entities)
	{
		if (entity == _entity)
		{
			entities.remove(entity);
			break;
		}
	}
}

Entity* Scene::FindEntityById(int _id)
{
	for (Entity* entity : entities)
	{
		if (entity->GetId() == _id)
		{
			return entity;
		}
	}
}
