#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include "render.h"


class mRect :
	public render
{
public:
	mRect() :render() {};
	virtual ~mRect();
	bool init();
	void createRect();
	
	
	void renderShape(void);
private:
	SDL_Window *gWindow;
};

