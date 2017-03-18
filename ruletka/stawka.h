#include "stdafx.h"
#include <string>

using namespace std;

class stawka
{
public:
	stawka();
	~stawka();
	void przypsz_kase(int siano);
	int pokaz_kasa();
private:
	int kasa;
};


//class gracz
//{
//public:
//	gracz(); // Konstruktor tworzy gracza domyslnie player[i] i domyslnie ustawia 1000$ na gre.
//	~gracz(); // Destruktor
//	void przypisz_nazwe(); //przypisuje nick
//	void obstaw(); // dostep do kasy
//	void przegrana(); // odejmuje od kasy
//	void wygrana(); // dodaje do kasy
//
//private:
//	string nazwa;
//	int kasa;
//};
