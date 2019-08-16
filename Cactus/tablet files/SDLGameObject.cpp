#include "SDLGameObject.h"
#include "TextureManager.h"

SDLGameObject::SDLGameObject(Loaderparams* params)
{
	m_x = params->GetX();
	m_y = params->GetY();
	
	m_width = params->GetWidth();
	m_heigh = params->GetHeight();
			
	m_currentRow = 1;
	m_currentFrame = 1;
			
	m_textureId = params->Gettextureid()
}

void SDLGameObject::Draw()
{
	TextureManager::Instance()->DrawFrame(m_textureId, m_x, m_y, m_width, m_height,
		m_currentRow, m_currentFrame, TheGame::Instance()->GetRenderer()));	
}
    
