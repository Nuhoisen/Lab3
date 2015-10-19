#include "render.h"




render::~render()
{
}


void render::setRender(SDL_Renderer * x)
{
	mRender = x;
}

SDL_Renderer * render::getRender()
{
	return mRender;
}