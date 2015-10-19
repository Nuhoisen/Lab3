#include "rendRect.h"
#include <cmath>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;




rendRect::~rendRect()
{
}

void rendRect::renderRect()
{
	int i = 0; 
	SDL_Renderer * rectShape;
	rectShape = getRender();

	i = 0 + (rand() % (int)(255 - 0 + 1));
	//clear screen
	SDL_SetRenderDrawColor(rectShape, 0xFF, 0xFF, 0xFF, 0xFF);
	SDL_RenderClear(rectShape);

	//Render red filled quad
	SDL_Rect fillRect = { SCREEN_WIDTH / 4, SCREEN_HEIGHT / 4, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 };
	SDL_SetRenderDrawColor(rectShape, i, 0x00, 0x00, 0xFF);
	SDL_RenderFillRect(rectShape, &fillRect);


	//Update screen
	SDL_RenderPresent(rectShape);
}