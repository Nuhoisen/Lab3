#include "window.h"
#include <iostream>
using std::cout;





window::~window()
{
}

bool window::init(const int SCREEN_WIDTH, const int SCREEN_HEIGHT)
{
		SDL_Surface *x;
		//Initialization flag
		bool success = true;

		//Initialize SDL
		if (SDL_Init(SDL_INIT_VIDEO) < 0)
		{
			cout<<"SDL could not initialize! SDL Error:"<< SDL_GetError();
			success = false;
		}
		else
		{
			//Create window
			gWindow = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
			if (gWindow == NULL)
			{
				cout<<"Window could not be created! SDL Error: "<< SDL_GetError();
				success = false;
			}
			else
			{
				
				//Get window surface
				x=SDL_GetWindowSurface(gWindow);
				//set the surface
				setScreenSurf(x);
			}
		}

		return success;
	

}


