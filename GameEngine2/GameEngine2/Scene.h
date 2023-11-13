#pragma once
#ifndef _SCENE_H_
#define _SCENE_H_

#include "Entity.h"

class Scene
{
	DECLARE_ABSTRACT_BASE_CLASS(Scene);
private:
	friend class SceneManager;
	std::list<Entity*> entities;
	std::string name;
	int id;

protected:
	void Initialize();
	void Destroy();
	void Update();
	void Load(json::JSON);

public :
	Entity* CreateEntity(Entity* _entity);
	void RemoveEntity(Entity* _entity);
	Entity* FindEntityById(int _id);
};
#endif // !_SCENE_H_


