#pragma once
#include "GameObject.h"
#include "LoaderParams.h"
#include <string>
#include "TextureManager.h"
#include "Game.h"
#include "Vector2D.h"

class SDLGameObject :
	public GameObject
{
public:
	SDLGameObject(const LoaderParams* params);

	virtual void Draw();
	virtual void Update();
	virtual void Clean();

	~SDLGameObject();

protected:

	Vector2D position;
	Vector2D velocity;
	Vector2D acceleration;

	int width;
	int height;

	int currentRow;
	int currentFrame;

	std::string textureId;
};

