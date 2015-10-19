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
	void createRect();
	void createSquare();
	void renderShape(void);
private:
	SDL_Window *gWindow;
};

