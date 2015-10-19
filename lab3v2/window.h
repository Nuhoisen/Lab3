#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include "render.h"


class window :
	public render
{
public:
	window() :render() {};
	virtual ~window();
	bool init();
	virtual void renderShape()=0;
private:
	SDL_Window *gWindow;
};

