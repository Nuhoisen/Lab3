#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <string>
#include <cmath>
#include "rendRect.h"

using std::cout;
using std::cin;

int main(int argc, char * argv[])
{
	shape * mainShape[2];
	
	window * mainWindow=nullptr;

	render * mainRend = nullptr;

	rendRect *mainRect = nullptr;
	int num = 0;
	bool check = false;
	if (!mainWindow->init())
	{
		cout << "Failed to initialize!\n";
	}
	else
	{
		do {
			cout << "would you like to render a rectangle(1.) or a square(2.)";
			cin >> num;
			if (num == 1)
			{
				check = true;
				mainRect->renderRect();
				
			}
			else if(num == 2)
			{
				check = true;
				//otherfunction
				
			}

		} while (check == false);
		

		

	}
	return 0;
}