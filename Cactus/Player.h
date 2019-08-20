#include "SDLGameObject.h"
#include "LoaderParams.h"
#include <SDL.h>
#include <string>


class Player : public SDLGameObject{
	
	public:
		Player(const LoaderParams* params);
		
		virtual void Draw();
		virtual void Update();
		virtual void Clean();
};
