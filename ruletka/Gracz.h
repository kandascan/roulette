#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Gracz
{
public:
	Gracz();
	Gracz(string, int);
	~Gracz();
	string pobierzNazwe();
	int pobierzKase();
	int pobierzStawke();
	int pobierzObstawe();
	char pobierzKolor();
	char pobierzParzysteNieparzyste();
	char pobierzMenu();
	void ustawNazwe(string);
	void ustawKase(int);
	void ustawStawke(int);
	void ustawObstaw(int);
	void ustawKolor(char);
	void ustawParzysteNieparzyste(char);
	void wyborMenu(char);
private:
	string nazwa;
	int kasa;
	int stawka;
	int obstawa;
	char kolor;
	char parzysteNieparzyste;
	char menu;
};
