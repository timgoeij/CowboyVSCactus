#pragma once
#include<SDL_Image.h>
#include<string>
#include<map>

class TextureManager
{
public:
	
	//load the image
	bool Load(std::string filename, std::string id, SDL_Renderer* renderer);

	//draw the texture
	void Draw(std::string id, int x, int y, int width, int height, SDL_Renderer* renderer, 
		SDL_RendererFlip flip = SDL_FLIP_NONE);
	
	//draw the texture in a specific frame
	void Draw(std::string id, int x, int y, int width, int heigth, int currentRow, int currentFrame, 
		SDL_Renderer* renderer, SDL_RendererFlip flip = SDL_FLIP_NONE);

	static TextureManager* Instance()
	{
		if (instance == 0)
		{
			instance = new TextureManager();
			return instance;
		}

		return instance;
	}
	
	~TextureManager();

private:
	std::map<std::string, SDL_Texture*> textureMap;

	static TextureManager* instance;

	TextureManager();
};

typedef TextureManager TheTextureManager;