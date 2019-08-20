#include "Player.h""

#include <string>

Player::Player(const LoaderParams* params) : SDLGameObject(params)
{
	
}


void Player::Draw()
{
	SDLGameObject::Draw();
}


void Player::Update()
{
	currentFrame = int(((SDL_GetTicks() / 100) % 6));
}

void Player::Clean()
{
}
