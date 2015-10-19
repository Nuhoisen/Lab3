#include "surface.h"
#include <iostream>
using std::cout;





surface::~surface()
{
}


SDL_Surface* surface::loadSurface(std::string path)
{
	//The final optimized image
	SDL_Surface* optimizedSurface = NULL;

	//Load image at specified path
	SDL_Surface* loadedSurface = SDL_LoadBMP(path.c_str());
	if (loadedSurface == NULL)
	{
		cout<<"Unable to load image! SDL Error:"<< SDL_GetError();
	}
	else
	{
		
		//Convert surface to screen format
		optimizedSurface = SDL_ConvertSurface(loadedSurface, gScreenSurface->format, NULL);
		if (optimizedSurface == NULL)
		{
			cout<<"Unable to optimize image! SDL Error:"<<SDL_GetError();
		}

		//Get rid of old loaded surface
		SDL_FreeSurface(loadedSurface);
	}

	return optimizedSurface;
}

SDL_Surface* surface::getScreenSurf()
{
	return  gScreenSurface;
}


bool surface::loadMedia()
{
	//Loading success flag
	bool success = true;

	//Load stretching surface
	gStretchedSurface = loadSurface("05_optimized_surface_loading_and_soft_stretching/stretch.bmp");
	if (gStretchedSurface == NULL)
	{
		printf("Failed to load stretching image!\n");
		success = false;
	}

	return success;
}

void surface::setScreenSurf(SDL_Surface * x)
{
	gScreenSurface = x;
}