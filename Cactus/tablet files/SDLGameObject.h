#include "GameObject"
#include <SDL.h>

class SDLGameObject : public GameObject
{
	public:
		SDLGameObject(Loaderparams * params);
		
		virtual void Draw();
		virtual void Update();
		virtual void Clean();
		
		protected:
			int m_x;
			int m_y;
			
			int m_width;
			int m_height;
			
			int m_currentRow;
			int m_currentframe;
			
			std::string m_textureId;
}
    
