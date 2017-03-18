#include "stdafx.h"
#include "Gracz.h"


Gracz::Gracz() // konstruktor Tworzy gracza o nazwie Player i kasie 1000$
{
	nazwa = "Player";
	kasa = 1000;
}
Gracz::Gracz(string nowaNazwa, int nowaKasa) // konstruktor Tworzy gracza o nazwie nowaNazwa i kasie nowaKasa deklarowanej przy tworzeniu obiektu
{
	nazwa = nowaNazwa;
	kasa = nowaKasa;
}
Gracz::~Gracz() // destruktor niszczy obiekt 
{
}
string Gracz::pobierzNazwe() // pobiera nazwe z klasy
{
	return nazwa;
}
int Gracz::pobierzKase() // pobiera kase z klasy
{
	return kasa;
}
int Gracz::pobierzStawke()
{
	return stawka;
}
int Gracz::pobierzObstawe()
{
	return obstawa;
}
char Gracz::pobierzKolor()
{
	return kolor;
}
char Gracz::pobierzParzysteNieparzyste()
{
	return parzysteNieparzyste;
}
char Gracz::pobierzMenu()
{
	return menu;
}
void Gracz::ustawNazwe(string _nowaNazwa) // ustawia nowa nazwe gracza
{
	nazwa = _nowaNazwa;
}
void Gracz::ustawKase(int _nowaKasa) // ustawia nowa kase dla gracza
{
	kasa = _nowaKasa;
}
void Gracz::ustawStawke(int _stawka)
{
	stawka = _stawka;
}
void Gracz::ustawObstaw(int _obstawa)
{
	obstawa = _obstawa;
}
void Gracz::ustawKolor(char _kolor)
{
	kolor = _kolor;
}
void Gracz::ustawParzysteNieparzyste(char _parzysteNieparzyste)
{
	parzysteNieparzyste = _parzysteNieparzyste;
}
void Gracz::wyborMenu(char _menu)
{
	menu = _menu;
}