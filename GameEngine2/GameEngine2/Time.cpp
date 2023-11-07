#include "Time.h"
Time* Time::instance = nullptr;
float Time::DeltaTime() const
{
    return Time::deltaTime.count();
}

float Time::TotalTime() const
{
    return Time::totalTime.count();
}

int Time::FrameCount() const
{
    return Time::frameCount;
}

void Time::Initialize()
{
	beginTime = std::chrono::system_clock().now();
	endTime = std::chrono::system_clock().now();

	deltaTime = std::chrono::duration<float>(0);
	totalTime = std::chrono::duration<float>(0);
	frameCount = 0;
}

void Time::Update()
{
	endTime = std::chrono::system_clock().now();
	deltaTime = endTime - beginTime;
	beginTime = endTime;
	totalTime += deltaTime;
	frameCount++;
}

