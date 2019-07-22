#include "Game.h"

const int FPS = 60;
const int DELAY_TIME = 1000.0f / FPS;

int wmain()
{
	Uint32 frameStart, frameTime;

	if (TheGame::Instance()->Init("Cowboy vs cactus", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN))
	{
		while (TheGame::Instance()->Running())
		{
			frameStart = SDL_GetTicks();

			TheGame::Instance()->HandleEvents();
			TheGame::Instance()->Update();
			TheGame::Instance()->Render();

			frameTime = SDL_GetTicks() - frameStart;

			if (frameTime <= DELAY_TIME)
			{
				SDL_Delay((int)(DELAY_TIME - frameTime));
			}
		}
	}
	else
	{
		return -1;
	}

	TheGame::Instance()->Clean();
	SDL_Quit();

	return 0;
}