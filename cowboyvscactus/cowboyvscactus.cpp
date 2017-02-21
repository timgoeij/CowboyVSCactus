#include "Game.h"

int wmain()
{
	if (TheGame::Instance()->Init("Cowboy vs cactus", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN))
	{
		while (TheGame::Instance()->Running)
		{
			TheGame::Instance()->HandleEvents();
			TheGame::Instance()->Update();
			TheGame::Instance()->Render();

			SDL_Delay(10);
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