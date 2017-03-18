#include "stdafx.h"
#include <string>

using namespace std;

class liczba
{
public:
	liczba();
	~liczba();
	void przypisz_kolor(char);
	void przypisz_numer(int);
	char pokaz_kolor();
	int pokaz_numer();

private:
	int numer;
	char kolor;
};

