#include "Enemy.h"

Enemy::Enemy(const Loaderparams* params) : SDLGameObject(params)
{
	
}

void Enemy::Draw()
{
	SDLGameObject::Draw()
}

void Enemy::Update()
{
	m_y += 1;
	m_x += 1;
	
	m_currentFrame = int(((SDL_GetTicks() / 100) % 6));
}

