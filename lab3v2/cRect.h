#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include "cRender.h"


class cRect :
	public cRender
{
public:
	cRect() :cRender() {};
	virtual ~cRect();
	bool init();
	void createRect();
	
	
	void renderShape(void);
private:
	SDL_Window *gWindow;
};

