#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <string>
#include <cmath>
#include "mRect.h"
#include "mSquare.h"

using std::cout;
using std::cin;

int main(int argc, char * argv[])
{
	
	shape * mainShape[2];
	
	mRect * mainRect=nullptr;
	mSquare * mainSquare = nullptr;

	int check = 0;
	int num = 0;
	
	mainSquare = new mSquare;
	mainRect = new mRect;
	if (!mainRect->init())
	{
		cout << "Failed to initialize!\n";
	}

	else
	{

		cout << "Here is a rectangle";
		mainRect->createRect();
		mainShape[0] = mainRect;
	}


	if (!mainSquare->init())
	{
		cout << "Failed to initialize!\n";
	}

	else
	{
		cout << "\nHere is a square";
		mainSquare->createSquare();
		mainShape[1] = mainSquare;
	}

		
		
		for (int i = 0; i < 1; i++)
		{
			delete mainShape[i];
			mainShape[i] = NULL;
		}
		return 0;
	}

