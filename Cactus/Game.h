#ifndef __Game__
#define __Game__

#include <SDL.h>
#include "TextureManager.h"

class Game
{
public:

	~Game();

	static Game* Instance()
	{
		if (instance == 0)
		{
			instance = new Game();
			return instance;
		}

		return instance;
	}

	bool Init(const char* title, int xpos, int ypos, int width, int height, int flags);
	void Render();
	void Update();
	void HandleEvents();
	void Clean();

	bool Running() { return running; }
	SDL_Renderer* GetRenderer() const { return rendererer; }

private:

	SDL_Window* window = 0;
	SDL_Renderer* rendererer = 0;

	bool running;

	static Game* instance;

	Game();
};

typedef Game TheGame;
#endif

