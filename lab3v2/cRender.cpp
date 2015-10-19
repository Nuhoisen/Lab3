#include "cRender.h"

cRender::~cRender()
{
}

void cRender::setRender(SDL_Renderer * x)
{
	mRender = x;
}

SDL_Renderer * cRender::getRender()
{
	return mRender;
}