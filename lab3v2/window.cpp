#include <SDL.h>
#include <SDL_image.h>
#include "window.h"
#include <iostream>
using std::cout;


const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;



window::~window()
{
}


bool window::init()
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
			cout<<"Warning: Linear texture filtering not enabled!";
		}

		//Create window
		gWindow = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (gWindow == NULL)
		{
			cout<<"Window could not be created! SDL Error: "<< SDL_GetError();
			success = false;
		}
		else
		{
			//Create renderer for window
			tempRend = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);

			if (tempRend == NULL)
			{
				cout<<"Renderer could not be created! SDL Error: "<< SDL_GetError();
				success = false;
			}
			else
			{
				//Initialize renderer color
				SDL_SetRenderDrawColor(tempRend, 0xFF, 0xFF, 0xFF, 0xFF);

				setRender(tempRend);
				//Initialize PNG loading
				int imgFlags = IMG_INIT_PNG;
				if (!(IMG_Init(imgFlags) & imgFlags))
				{
					cout<<"SDL_image could not initialize! SDL_image Error:"<< IMG_GetError();
					success = false;
				}
			}
		}
	}

	return success;
}