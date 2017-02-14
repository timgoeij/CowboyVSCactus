#include "Game.h"

Game* game = 0;

int wmain()
{
	game = new Game();
	
	game->init("Cowboy vs cactus", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);

	while (game->Running())
	{
		game->handleEvents();
		game->update();
		game->render();
	}

	game->clean();
	SDL_Quit();

	return 0;
}