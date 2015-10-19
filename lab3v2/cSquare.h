#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include "cRender.h"

class cSquare :
	public cRender
{
public:
	cSquare() :cRender() {};
	virtual ~cSquare();
	void createSquare();

	bool init();
	virtual void renderShape(void) ;

private:
	SDL_Window * mWindow;
};

