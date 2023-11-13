#include"EngineCore.h"
#include "RenderSystem.h"
RenderSystem* RenderSystem::instance = nullptr;


void RenderSystem::Initialize()
{
	Load();
	SDL_Window* window = SDL_CreateWindow(name.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_OPENGL);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	SDL_SetWindowFullscreen(window, fullscreen);
	SDL_Event event;

	bool quit = false;

	while (!quit) {
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				quit = true;
			}
		}

		SDL_RenderPresent(renderer);
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}

void RenderSystem::Update()
{

}	



void RenderSystem::Load()
{
	std::ifstream inputStream("RenderSystem.json");
	std::string str((std::istreambuf_iterator<char>(inputStream)),
				std::istreambuf_iterator<char>());
	json::JSON obj = json::JSON::Load(str);

	if (obj.hasKey("name")) 
	{
		name = obj["name"].ToString();
	}
	if (obj.hasKey("width"))
	{
		width = obj["width"].ToInt();
	}
	if (obj.hasKey("height"))
	{
		height = obj["height"].ToInt();
	}
	if (obj.hasKey("fullscreen"))
	{
		fullscreen = obj["fullscreen"].ToBool();
	}


}

