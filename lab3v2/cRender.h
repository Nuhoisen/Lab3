#pragma once
#include <SDL.h>
#include "cShape.h"


class cRender :
	public cShape
{
public:
	cRender() : cShape() {};
	virtual ~cRender();

	void setRender(SDL_Renderer * x);
	SDL_Renderer * getRender();
	virtual void renderShape() = 0;

private:
	SDL_Renderer * mRender;
};

