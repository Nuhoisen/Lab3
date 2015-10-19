#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include "render.h"

class mSquare :
	public render
{
public:
	mSquare() :render() {};
	virtual ~mSquare();
	void createSquare();

	bool init();
	virtual void renderShape(void) ;

private:
	SDL_Window * mWindow;
};

