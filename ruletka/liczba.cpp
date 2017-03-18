#include "stdafx.h"
#include "liczba.h"

liczba::liczba()
{
}

liczba::~liczba()
{
}
void liczba::przypisz_kolor(char kol)
{
	kolor = kol;
}
void liczba::przypisz_numer(int nr)
{
	numer = nr;
}
char liczba::pokaz_kolor()
{
	return kolor;
}
int liczba::pokaz_numer()
{
	return numer;
}
