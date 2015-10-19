#pragma once
#include <string>
#include <SDL.h>
#include "PVBC.h"
class surface :	public PVBC
{
public:
	surface() {}
	virtual ~surface();

	
	bool loadMedia();
	 SDL_Surface * getScreenSurf();
	void setScreenSurf(SDL_Surface * x);
	virtual SDL_Surface* loadSurface(std::string path);
	
private: 
	//Current displayed image
	SDL_Surface* gStretchedSurface = NULL;
	//The surface contained by the window
	SDL_Surface* gScreenSurface=NULL;
	//Loads individual image
};

