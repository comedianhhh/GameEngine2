#pragma once
#ifndef _TIME_H_
#define _TIME_H_

#include <chrono>
class Time
{
private:
	friend class Engine;
	static Time* instance;

private:
	unsigned int frameCount=0;
	std::chrono::duration<float> deltaTime=std::chrono::duration<float>(0.0f);
	std::chrono::time_point<std::chrono::system_clock> beginTime=std::chrono::system_clock::now();
	std::chrono::time_point<std::chrono::system_clock> endTime=std::chrono::system_clock::now();
	std::chrono::duration<float> totalTime=std::chrono::duration<float>(0.0f);

public:
	inline static Time& Instance()
	{
		if (instance == nullptr)
		{
			instance = new Time();
		}
		return *instance;
	}

	float DeltaTime() const;
	float TotalTime() const;
	int FrameCount() const;
	
protected:
	void Initialize();
	void Update();

private:
	inline explicit Time() = default;
	inline ~Time() = default;
	inline explicit Time(Time const&) = delete;
	inline Time& operator=(Time const&) = delete;

};

#endif // !_TIME_H_
