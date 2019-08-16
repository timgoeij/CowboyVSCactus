#include "GammeObject.h"
#include "TextureManager.h""

#include <string>


GameObject::Load(int x, int y, int with, int height, std::string texturetId)
{
	m_x = x;
	m_y = y;
	m_width = width;
	=_textureId = textureId;
	
	m_currentRow = 1;
	m_currentFrame = 1;
}

GameObject::Draw(SDL_Renderer* renderer)
[
	TextureManager::Instance()->DrawFrame(m_textureId, m_x, m_y, m_width, m_height, m_currentRow, m_currentFrame, renderer);
]

GameObject::Update()
{
	m_x += 1;
}