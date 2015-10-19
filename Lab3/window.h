#pragma once
#include <sdl.h>
#include "surface.h"
class window : public surface
{
public:
	window() :surface() {}
	virtual ~window();

	bool init(const int SCREEN_WIDTH, const int SCREEN_HEIGHT);
	
	virtual void loadSurface()=0;
private:
	SDL_Window* gWindow = NULL;
};

