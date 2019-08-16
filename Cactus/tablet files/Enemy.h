#include "GameObject.h"

class Enemy : public SDLGameObject
{
	public:
		Enemy(const LoaderParams* Params)		
		
		virtual void Draw();
		virtual void Update();
		virtual void Clean());
}
