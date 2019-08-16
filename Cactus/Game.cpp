#include "Game.h"


Game::instance = 0;

Game::Game()
{
}


Game::~Game()
{
}

bool Game::Init(const char * title, int xpos, int ypos, int width, int height, int flags)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);

		if (window != 0)
		{
			rendererer = SDL_CreateRenderer(window, -1, 0);

			if (rendererer != 0)
			{
				SDL_SetRenderDrawColor(rendererer, 0, 0, 0, 255);
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}

	}
	else
	{
		return false;
	}

	running = true;

	return true;
}

void Game::Render()
{
	SDL_RenderClear(rendererer);

	SDL_RenderPresent(rendererer);
}

void Game::Update()
{
	SDL_Event event;

	if (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT: running = false;
		default:
			break;
		}
	}
}

void Game::HandleEvents()
{
}

void Game::Clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(rendererer);
	SDL_Quit();
}
