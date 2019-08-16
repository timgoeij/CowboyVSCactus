#include "Player.h""

#include <string>

Player::Player(const LoaderParams* params) : SDLGameObject(params)
{
	
}


void Player::Draw()
{
	SDLGameObject::Draw())
}


void Player::Update()
{
	m_x -= 1;
	m_currentFrame = int(((SDL_GetTicks() / 100) % 6));
}
