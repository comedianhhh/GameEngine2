#pragma once
#ifndef _INPUTMANAGER_H_
#define _INPUTMANAGER_H_



class InputManager
{
private:
	friend class Engine;
	static InputManager* instance;
public:
	static InputManager& Instance()
	{
		if (instance == nullptr)
		{
			instance = new InputManager();
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
private:
	inline explicit InputManager()=default;
	inline ~InputManager() = default;
	inline explicit InputManager(InputManager const&) = delete;
	inline InputManager& operator=(InputManager const&) = delete;


};

#endif
