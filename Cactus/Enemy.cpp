#include "LoaderParams.h"
#include "Enemy.h"

Enemy::Enemy(const LoaderParams* params) : SDLGameObject(params)
{
	
}

void Enemy::Draw()
{
	SDLGameObject::Draw();
}

void Enemy::Update()
{
	currentFrame = int(((SDL_GetTicks() / 100) % 6));
}

void Enemy::Clean()
{
}

