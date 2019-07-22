#include "TextureManager.h"

TextureManager* TextureManager::instance = 0;

TextureManager::TextureManager()
{
}

TextureManager::~TextureManager()
{
}

//load the image
bool TextureManager::Load(std::string filename, std::string id, SDL_Renderer* renderer)
{
	//create a temperary surface
	SDL_Surface* temperarySurface = IMG_Load(filename.c_str());

	//create texture from surface
	SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, temperarySurface);

	//delete the surface out of the memory
	SDL_FreeSurface(temperarySurface);

	//check if everyting is ok and add the texture in the map
	if (texture != 0)
	{
		textureMap[id] = texture;
		return true;
	}

	// its going wrong if it reach here
	return false;
}

//draw the texture
void TextureManager::Draw(std::string id, int x, int y, int width, int height, SDL_Renderer * renderer, SDL_RendererFlip flip)
{
	SDL_Rect srcRect;
	SDL_Rect destRect;

	srcRect.x = 0;
	srcRect.y = 0;

	srcRect.w = destRect.w = width;
	srcRect.h = destRect.h = height;

	destRect.x = x;
	destRect.y = y;

	SDL_RenderCopyEx(renderer, textureMap[id], &srcRect, &destRect, 0, 0, flip);
}

// draw the texture in a specific frame
void TextureManager::Draw(std::string id, int x, int y, int width, int heigth, int currentRow, int currentFrame, SDL_Renderer * renderer, SDL_RendererFlip flip)
{
	SDL_Rect srcRect;
	SDL_Rect destRect;

	srcRect.x = width * currentFrame;
	srcRect.h = heigth * (currentRow - 1);

	srcRect.w = destRect.w = width;
	srcRect.h = destRect.h = heigth;

	destRect.x = x;
	destRect.y = y;

	SDL_RenderCopyEx(renderer, textureMap[id], &srcRect, &destRect, 0, 0, flip);
}
