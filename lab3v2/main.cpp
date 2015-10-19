#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <string>
#include <cmath>
#include "window.h"

using std::cout;
using std::cin;

int main(int argc, char * argv[])
{
	
	shape * mainShape[2];
	
	window * mainWindow=nullptr;


	int check = 0;
	int num = 0;
	

	mainWindow = new window();
	if (!mainWindow->init())
	{
		cout << "Failed to initialize!\n";
	}
	else
	{
		
		cout << "Here is a rectangle";
		mainWindow->createRect();
		mainShape[0] = mainWindow;
		
		
		cout << "\nHere is a square";
		mainWindow->createSquare();
		mainShape[1] = mainWindow;
			

		
		
		for (int i = 0; i < 1; i++)
		{
			delete mainShape[i];
			mainShape[i] = NULL;
		}
	}
	return 0;
	
}
