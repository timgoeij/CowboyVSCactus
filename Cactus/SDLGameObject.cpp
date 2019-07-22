#include "SDLGameObject.h"



SDLGameObject::SDLGameObject(const LoaderParams* params)
	: GameObject(params), position(params->getX(), params->getY()),
	velocity(0, 0), acceleration(0, 0)
{
	width = params->getWidth();
	height = params->getHeight();

	textureId = params->getTextureId();
}

void SDLGameObject::Draw()
{
	TheTextureManager::Instance()->Draw(textureId, position.GetX(), position.GetY(), width, height, TheGame::Instance()->GetRenderer());
}

void SDLGameObject::Update()
{
}

void SDLGameObject::Clean()
{
}


SDLGameObject::~SDLGameObject()
{
}
