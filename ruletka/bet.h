#include "stdafx.h"
using namespace std;

class bet
{
public:
	virtual bool czy_wygrana(int);
	virtual float ile_wygrana();
	float zaklad;
};

class red_bet :public bet{
public:
	bool red;
	red_bet(bool red)
	{
		this->red = red;
	}
	bool czy_wygrana(int res)
	{
		if (red && res % 2 == 0 && res != 0)
			return 1;
		if (!red && res % 2 == 1 && res != 0)
			return 1;
		return 0;

	}
	float ile_wygrana()
	{
		return zaklad * 2;
	}
};