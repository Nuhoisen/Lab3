#include "cSquare.h"
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
using std::cout;
using std::cin;

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;





cSquare::~cSquare()
{
}


void cSquare::createSquare()
{


	int i = 0;
	SDL_Renderer * rectShape;
	rectShape = getRender();

	i = 0 + (rand() % (int)(255 - 0 + 1));
	//clear screen
	SDL_SetRenderDrawColor(rectShape, 0xFF, 0xFF, 0xFF, 0xFF);
	SDL_RenderClear(rectShape);

	//Render red filled quad
	SDL_Rect fillRect = { SCREEN_WIDTH / 4, SCREEN_HEIGHT / 3, SCREEN_WIDTH / 4, SCREEN_HEIGHT / 3 };
	SDL_SetRenderDrawColor(rectShape, 0x00, i, 0x00, 0xFF);
	SDL_RenderFillRect(rectShape, &fillRect);


	//Update screen
	SDL_RenderPresent(rectShape);
	SDL_Delay(2000);

}

bool cSquare::init()
{

	SDL_Renderer * tempRend;
	//Initialization flag
	bool success = true;

	//Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		cout << "SDL could not initialize! SDL Error: " << SDL_GetError();
		success = false;
	}
	else
	{
		//Set texture filtering to linear
		if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1"))
		{
			cout << "Warning: Linear texture filtering not enabled!";
		}

		//Create window
		mWindow = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (mWindow == NULL)
		{
			cout << "Window could not be created! SDL Error: " << SDL_GetError();
			success = false;
		}
		else
		{
			//Create renderer for window
			tempRend = SDL_CreateRenderer(mWindow, -1, SDL_RENDERER_ACCELERATED);

			if (tempRend == NULL)
			{
				cout << "Renderer could not be created! SDL Error: " << SDL_GetError();
				success = false;
			}
			else
			{
				//Initialize renderer color
				SDL_SetRenderDrawColor(tempRend, 0xFF, 0xFF, 0xFF, 0xFF);

				setRender(tempRend);


			}
		}
	}

	return success;
}


void cSquare::renderShape(void)
{

}