#include <SDL.h>
#include "Loaderparams.h"
class GameObject
{
public:

  virtual void draw() = 0;
  virtual void update() = 0;
  virtual void clean() = 0;

protected:

  GameObject(const Loaderparams* params){}
  
  virtual ~GameObject{ }
};
    