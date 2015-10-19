#pragma once
#include <SDL.h>
#include "shape.h"


class render :
	public shape
{
public:
	render() : shape() {};
	virtual ~render();

	void setRender(SDL_Renderer * x);
	SDL_Renderer * getRender();
	virtual void renderShape() = 0;

private:
	SDL_Renderer * mRender;
};

