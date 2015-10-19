#pragma once
#include "window.h"
class rendRect :
	public window
{
public:
	rendRect() :window() {};
	virtual ~rendRect();
	void renderRect();
};

