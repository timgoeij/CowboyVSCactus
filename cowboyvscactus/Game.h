#ifndef __Game__
#define __Game__

#include <SDL.h>
#include "TextureManager.h"

class Game
{
public:
	Game();
	~Game();

	bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
	void render();
	void update();
	void handleEvents();
	void clean();

	bool Running() { return running; }

private:
	
	SDL_Window* window = 0;
	SDL_Renderer* rendererer = 0;

	bool running;
};
#endif
