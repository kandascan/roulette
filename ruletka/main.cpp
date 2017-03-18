// ruletka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "liczba.h"
#include "Gracz.h"
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <cstdlib>
#include <vector>

using namespace std;

void ustawDomyslnyKolor()
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
}
void zmienKolor(int kolor)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, kolor| FOREGROUND_INTENSITY);
}
void plansza()
{
	/*
	    -----------------------------------------------------------------
	  /  | 3 | 6 | 9 | 12 | 15 | 18 | 21 | 24 | 27 | 30 | 33 | 36 | 2to1 |
	     -----------------------------------------------------------------
	 | 0 | 2 | 5 | 8 | 11 | 14 | 17 | 20 | 23 | 26 | 29 | 32 | 36 | 2to1 |
	     -----------------------------------------------------------------
	  \  | 1 | 4 | 7 | 10 | 13 | 16 | 19 | 22 | 25 | 28 | 31 | 34 | 2to1 |
	    -----------------------------------------------------------------
		 |	   1st 12     |		 2nd 12		  |		 3rd 12		  |
		 ----------------------------------------------------------
		 | 1 to 18 | Even |	  Red   |  Black  |	  ODD   |19 to 36 |
		  --------------------------------------------------------
	*/
	HANDLE hOut;
	zmienKolor(7);
	cout << "     -----------------------------------------------------------------" << endl;
	cout << "   /  | "; zmienKolor(4); cout << "3 "; zmienKolor(7); cout << "| "; zmienKolor(8); cout << "6 "; zmienKolor(7); cout << "| "; zmienKolor(4); cout << "9 "; zmienKolor(7); cout << "| "; zmienKolor(4); cout << "12 "; zmienKolor(7); cout << "| "; zmienKolor(8); cout << "15 "; zmienKolor(7); cout << "| "; zmienKolor(4); cout << "18 "; zmienKolor(7); cout << "| "; zmienKolor(4); cout << "21 "; zmienKolor(7); cout << "| "; zmienKolor(8); cout << "24 "; zmienKolor(7); cout << "| "; zmienKolor(4); cout << "27 "; zmienKolor(7); cout << "| "; zmienKolor(4); cout << "30 "; zmienKolor(7); cout << "| "; zmienKolor(8); cout << "33 "; zmienKolor(7); cout << "| "; zmienKolor(4); cout << "36 "; zmienKolor(7); cout << "| 2to1 |" << endl;
	cout << "      -----------------------------------------------------------------" << endl;
	cout << "  | "; zmienKolor(2); cout << "0 "; zmienKolor(7); cout << "| "; zmienKolor(8); cout << "2 "; zmienKolor(7); cout << "| "; zmienKolor(4); cout << "5 "; zmienKolor(7); cout << "| "; zmienKolor(8); cout << "8 "; zmienKolor(7); cout << "| "; zmienKolor(8); cout << "11 "; zmienKolor(7); cout << "| "; zmienKolor(4); cout << "14 "; zmienKolor(7); cout << "| "; zmienKolor(8); cout << "17 "; zmienKolor(7); cout << "| "; zmienKolor(8); cout << "20 "; zmienKolor(7); cout << "| "; zmienKolor(4); cout << "23 "; zmienKolor(7); cout << "| "; zmienKolor(8); cout << "26 "; zmienKolor(7); cout << "| "; zmienKolor(8); cout << "29 "; zmienKolor(7); cout << "| "; zmienKolor(4); cout << "32 "; zmienKolor(7); cout << "| "; zmienKolor(8); cout << "35 "; zmienKolor(7); cout << "| 2to1 | " << endl;
	cout << "      -----------------------------------------------------------------" << endl;
	cout << "   \\  | "; zmienKolor(4); cout << "1 "; zmienKolor(7); cout << "| "; zmienKolor(8); cout << "4 "; zmienKolor(7); cout << "| "; zmienKolor(4); cout << "7 "; zmienKolor(7); cout << "| "; zmienKolor(8); cout << "10 "; zmienKolor(7); cout << "| "; zmienKolor(8); cout << "13 "; zmienKolor(7); cout << "| "; zmienKolor(4); cout << "16 "; zmienKolor(7); cout << "| "; zmienKolor(4); cout << "19 "; zmienKolor(7); cout << "| "; zmienKolor(8); cout << "22 "; zmienKolor(7); cout << "| "; zmienKolor(4); cout << "25 "; zmienKolor(7); cout << "| "; zmienKolor(8); cout << "28 "; zmienKolor(7); cout << "| "; zmienKolor(8); cout << "31 "; zmienKolor(7); cout << "| "; zmienKolor(4); cout << "34 "; zmienKolor(7); cout << "| 2to1 |" << endl;
	cout << "     -----------------------------------------------------------------" << endl;
	cout << "      |     1st 12     |       2nd 12      |      3rd 12       |" << endl;
	cout << "      ----------------------------------------------------------" << endl;
	cout << "      | 1 to 18 | Even |   Red   |  Black  |   ODD   |19 to 36 |" << endl;
	cout << "       --------------------------------------------------------"<<endl;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
}
void tytul(string tekst)
{
	cout << "               ------------------------------------------- " << endl;
	cout << "              |                                           |" << endl;
	cout << "              |\t\t   "<<tekst<<"\t\t  |" << endl;
	cout << "              |                                           |" << endl;
}
int iluGra()
{
	int ile;
	tytul("Ruletka v1.5 alpha");
	plansza();
	cout << "\n                       Ilu graczy bedzie gralo: ";
	cin >> ile;
	return ile;
}
void wypelnij_tablice(liczba tablica[])
{
	for (int i = 0; i <= 36; i++)
	{
		if (i % 2)
			tablica[i].przypisz_numer(i);
		else if (i == 0)
		{
			tablica[i].przypisz_numer(i);
		}
		else
			tablica[i].przypisz_numer(i);
	}
	for (int i = 0; i <= 36; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 9 || i == 12 || i == 14 || i == 16 || i == 18 || i == 19 || i == 21 || i == 23 || i == 25 || i == 27 || i == 30 || i == 32 || i == 34 || i == 36)
			tablica[i].przypisz_kolor('r');
		else if (i==0)
			tablica[i].przypisz_kolor('g');
		else
			tablica[i].przypisz_kolor('b');
	}
}
void pokaz_tablice(liczba tablica[])
{
	HANDLE hOut;
	for (int i = 0; i <= 36; i++)
	{
		if (tablica[i].pokaz_kolor() == 'r')
		{

				hOut = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout << tablica[i].pokaz_numer() << " ";
		}
		else if (tablica[i].pokaz_kolor() == 'g')
		{
			hOut = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			cout << tablica[i].pokaz_numer() << " ";
		}
		else
		{
			hOut = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << tablica[i].pokaz_numer()<<" ";
		}
	}
	cout << endl;
	zmienKolor(7);
}
void wybierzOpcje(string tekst)
{
	cout << "              |                                           |" << endl;
	cout << "              |\t\t   " << tekst << "\t\t  |" << endl;
	cout << "              |                                           |" << endl;
	cout << "               ------------------------------------------- " << endl;
}
void menu()
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN| FOREGROUND_BLUE| FOREGROUND_RED);
	wybierzOpcje("Wybierz opcje");
	cout << "\n                           0. Zielone Zero                 " << endl;
	cout << "                           1. Czerwony / Czarny            " << endl;
	cout << "                           2. Liczbe                       " << endl;
	cout << "                           3. Parzyste / Nieparzyste       " << endl;
	cout << "                           4. Koniec                       " << endl;
	cout << "                           Wpisz tutaj: ";
}
void nowyGracz(Gracz tabGraczy[], int iluGraczy) // Tworzy tablice nowych graczy
{
	string nazwaGracza;
	for (int i = 0; i < iluGraczy; i++)
	{
		cout << "\n                     Podaj nazwe dla " << i + 1 << " gracza: ";
		cin >> nazwaGracza;
		tabGraczy[i].ustawNazwe(nazwaGracza);
		tabGraczy[i].ustawKase(1000);
	}
}
void ustawStawke(Gracz tabGraczy[], int iluGraczy) //Ustala stawke w grze w ruletce dla gracza
{
	int ileObstaw;
	for (int i = 0; i < iluGraczy; i++)
	{
		system("cls");
		tytul(tabGraczy[i].pobierzNazwe()+" podaj stawke");
		plansza();
		if (tabGraczy[i].pobierzKase() <= 0)
		{
			cout << tabGraczy[i].pobierzNazwe() << " GAME OVER" << endl;
		}
		else
		{
			cout << "\n\t\t " << tabGraczy[i].pobierzNazwe() << " masz " << tabGraczy[i].pobierzKase() << "$ za ile obstawiasz: ";
			//cin >> ileObstaw;
			//if (ileObstaw > tabGraczy[i].pobierzKase())
			//{
			//	cout << "\n                         Nie masz tyle pieniedzy" << endl;
			//	cout << "                         Twoje maximum to: " << tabGraczy[i].pobierzKase() << endl;
			//	cout << "\n                       Wpisz poprawna wartosc: ";
			//	cin >> ileObstaw;
			//}
			do
			{
				try
				{
					cin >> ileObstaw;
					if (ileObstaw > tabGraczy[i].pobierzKase())
						throw 99;
				}
				catch (int x)
				{
					cout << "\n                         Blad nr. "<< x << endl;
					cout << "\n                         Nie masz tyle pieniedzy" << endl;
					cout << "                         Twoje maximum to: " << tabGraczy[i].pobierzKase() << endl;
					cout << "\n                       Wpisz poprawna wartosc: ";
				}
			} while (ileObstaw >= tabGraczy[i].pobierzKase());

			tabGraczy[i].ustawStawke(ileObstaw);
			tabGraczy[i].ustawKase(tabGraczy[i].pobierzKase() - tabGraczy[i].pobierzStawke());
		}
	}
}
void obstawPole(Gracz tabGraczy[],liczba tabLiczb[], int iluGraczy)
{
	char wyborSwitch;
	char kolorSwitch;
	char parzysteNieparzysteSwitch;
	int obstawa;

	for (int i = 0; i < iluGraczy; i++)// obstawianie odpowiednich pol przez gracza w ruletce
	{
		system("cls");
		if (tabGraczy[i].pobierzStawke() == 0)
		{
		}
		else
		{
			tytul(tabGraczy[i].pobierzNazwe()+" co obstawiasz?");
			plansza();
			menu();
			cin >> wyborSwitch;
			tabGraczy[i].wyborMenu(wyborSwitch);
			switch (tabGraczy[i].pobierzMenu())
			{
			case '0':
			{
						obstawa = 0;
						tabGraczy[i].ustawObstaw(obstawa);
			}
				break;
			case '1':
			{
						system("cls");
						tytul(tabGraczy[i].pobierzNazwe()+" jaki kolor");
						plansza();
						wybierzOpcje("Red(r) Black(b)");
						cout << "\n                           Wpisz tutaj: ";
						cin >> kolorSwitch;
						switch (kolorSwitch)
						{
						case 'r':
							tabGraczy[i].ustawKolor('r');
							break;
						case 'b':
							tabGraczy[i].ustawKolor('b');
							break;
						default:
						{
								   cout << "                        Nieprawidlowa wartosc!" << endl;
								   Sleep(1000);
								   tabGraczy[i].ustawKase(tabGraczy[i].pobierzKase() + tabGraczy[i].pobierzStawke());
								   tabGraczy[i].ustawStawke(NULL);
								   tabGraczy[i].ustawKolor(NULL);
						}
							break;
						}
			}
				break;
			case '2':
			{
						system("cls");
						tytul(tabGraczy[i].pobierzNazwe() + " jaka liczbe");
						plansza();
						wybierzOpcje("Mozesz od 1 do 36");
						cout << "\n                           Wpisz tutaj: ";
						cin >> obstawa;
						if (obstawa > 36 || obstawa < 1)
						{
							cout << "                        Nieprawidlowa wartosc!" << endl;
							Sleep(1000);
							tabGraczy[i].ustawKase(tabGraczy[i].pobierzKase() + tabGraczy[i].pobierzStawke());
							tabGraczy[i].ustawStawke(NULL);
							tabGraczy[i].ustawObstaw(NULL);
						}
						else
						{
							tabGraczy[i].ustawObstaw(obstawa);
						}
			}
				break;
			case '3':
				system("cls");
				tytul(tabGraczy[i].pobierzNazwe()+ " jakie liczby");
				plansza();
				wybierzOpcje("Parzy(p) Nieparzy(n)");
				cout << "\n                           Wpisz tutaj: ";
				cin >> parzysteNieparzysteSwitch;
				switch (parzysteNieparzysteSwitch)
				{
				case 'p':
					tabGraczy[i].ustawParzysteNieparzyste('p');
					break;
				case 'n':
					tabGraczy[i].ustawParzysteNieparzyste('n');
					break;
				default:
				{
						   cout << "                        Nieprawidlowa wartosc!" << endl;
						   Sleep(1000);
						   tabGraczy[i].ustawKase(tabGraczy[i].pobierzKase() + tabGraczy[i].pobierzStawke());
						   tabGraczy[i].ustawStawke(NULL);
						   tabGraczy[i].ustawParzysteNieparzyste(NULL);
				}
					break;
				}
				break;
			case '4': exit(0);
			default:
			{
					   cout << "                        Brak opcji do wyboru" << endl;
					   tabGraczy[i].ustawKase(tabGraczy[i].pobierzKase() + tabGraczy[i].pobierzStawke());
					   tabGraczy[i].ustawStawke(NULL);
			}
				break;
			}
		}
	}
}
void sprawdzWygrana(Gracz tab[], liczba tablica[], int ileGraczy, int spin) // sprawdza Wygrana dla gracza
{
	cout << "Enter zakreci ruletka" << endl;
	system("pause");
	system("cls");

	for (int i = 0; i < ileGraczy; i++)
	{
		if (tab[i].pobierzStawke() == 0)
		{
		}
		else
		{
			if (tab[i].pobierzMenu() == '0')
			{
				if (tab[i].pobierzObstawe() == tablica[spin].pokaz_numer())
				{
					tab[i].ustawStawke(tab[i].pobierzStawke() * 35);
					tab[i].ustawKase(tab[i].pobierzKase() + tab[i].pobierzStawke());
					tab[i].ustawStawke(NULL);
				}
				else
				{
					tab[i].ustawStawke(NULL);
				}
			}
			else if (tab[i].pobierzMenu() == '1')
			{
				if (tab[i].pobierzKolor() == tablica[spin].pokaz_kolor())
				{
					tab[i].ustawStawke(tab[i].pobierzStawke() * 2);
					tab[i].ustawKase(tab[i].pobierzKase() + tab[i].pobierzStawke());
					tab[i].ustawStawke(NULL);
				}
				else
				{
					tab[i].ustawStawke(NULL);
				}
			}
			else if (tab[i].pobierzMenu() == '2')
			{
				if (tab[i].pobierzObstawe() == tablica[spin].pokaz_numer())
				{
					tab[i].ustawStawke(tab[i].pobierzStawke() * 35);
					tab[i].ustawKase(tab[i].pobierzKase() + tab[i].pobierzStawke());
					tab[i].ustawStawke(NULL);
				}
				else
				{
					tab[i].ustawStawke(NULL);
				}
			}
			else if (tab[i].pobierzMenu() == '3')
			{
				if (tab[i].pobierzParzysteNieparzyste() == 'p')
				{
					if (tablica[spin].pokaz_numer() % 2)
					{
						tab[i].ustawStawke(NULL);
					}
					else
					{
						if (tablica[spin].pokaz_numer() == 0)
						{
							tab[i].ustawStawke(NULL);
						}
						else
						{
							tab[i].ustawStawke(tab[i].pobierzStawke() * 2);
							tab[i].ustawKase(tab[i].pobierzKase() + tab[i].pobierzStawke());
							tab[i].ustawStawke(NULL);
						}
					}
				}
				else if (tab[i].pobierzParzysteNieparzyste() == 'n')
				{
					if (tablica[spin].pokaz_numer() % 2)
					{
						tab[i].ustawStawke(tab[i].pobierzStawke() * 2);
						tab[i].ustawKase(tab[i].pobierzKase() + tab[i].pobierzStawke());
						tab[i].ustawStawke(NULL);
					}
					else
					{
						tab[i].ustawStawke(NULL);
					}
				}
			}
			else
			{
				tab[i].ustawKase(tab[i].pobierzKase() + tab[i].pobierzStawke());
				tab[i].ustawStawke(NULL);
			}
		}
	}
}
void wyswietlWynik(Gracz tab[], liczba tablica[], int ileGraczy, int spin)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
	cout << "               ------------------------------------------- " << endl;
	cout << "              |                                           |" << endl;
	cout << "              |            Wylosowano liczbe: ";
	if (spin == 0)
	{
		zmienKolor(2);
		cout << spin;
	}
	else if (spin == 1 || spin == 3 || spin == 5 || spin == 7 || spin == 9 || spin == 12 || spin == 14 || spin == 16 || spin == 18 || spin == 19 || spin == 21 || spin == 23 || spin == 25 || spin == 27 || spin == 30 || spin == 32 || spin == 34 || spin == 36)
	{
		zmienKolor(4);
		cout << spin;
	}
	else
	{
		zmienKolor(0);
		cout << spin;
	}
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
	cout << " \t  |"<<endl;
	cout << "              |                                           |" << endl;

	plansza();

	cout << "              |    Gracz    |   Obstawil   |     Kasa     |" << endl;
	cout << "              --------------------------------------------- " << endl;
	for (int i = 0; i < ileGraczy; i++)
	{
		cout << "              |    " << tab[i].pobierzNazwe() << "\t    |";
		if (tab[i].pobierzKase() == 0)
		{
			cout << "   Game Over  ";
		}
		else
		{
			if (tab[i].pobierzMenu() == '0')
				cout << "     Zero     ";
			else if (tab[i].pobierzMenu() == '1')
			{
				if (tab[i].pobierzKolor() == 'r')
				{
					cout << "      Red     ";
				}
				else if (tab[i].pobierzKolor() == 'b')
				{
					cout << "     Black    ";
				}
				else cout << "     Brak     ";
			}
			else if (tab[i].pobierzMenu() == '2')
				cout << "\t   " << tab[i].pobierzObstawe()<<"\t   ";
			else if (tab[i].pobierzMenu() == '3')
			{
				if (tab[i].pobierzParzysteNieparzyste() == 'p')
					cout << "   Parzyste   ";
				else if (tab[i].pobierzParzysteNieparzyste() == 'n')
					cout << "  Nieparzyste ";
				else cout << "     Brak     ";
			}
			else cout << "      NiC     ";
		}
		cout << "|\t " << tab[i].pobierzKase() << "$\t  |" << endl;
	}
}
vector<int> top10(int spin, int licznikLosowan, vector<int> dziesiecLosowan) // 10 ostatnich losowan
{
	dziesiecLosowan.push_back(spin);
	cout << "              --------------------------------------------- " << endl;
	cout << "              |            Ostatnie 10 losowan            |" << endl;
	cout << "               -------------------------------------------" << endl;
	cout << "               |";
	for (int i = 0; i <= licznikLosowan; i++)
	{
		if (dziesiecLosowan[i] == 0)
		{
			zmienKolor(2);
			printf("%3d,", dziesiecLosowan[i]);
		}
		else if (dziesiecLosowan[i] == 1 || dziesiecLosowan[i] == 3 || dziesiecLosowan[i] == 5 || dziesiecLosowan[i] == 7 || dziesiecLosowan[i] == 9 || dziesiecLosowan[i] == 12 || dziesiecLosowan[i] == 14 || dziesiecLosowan[i] == 16 || dziesiecLosowan[i] == 18 || dziesiecLosowan[i] == 19 || dziesiecLosowan[i] == 21 || dziesiecLosowan[i] == 23 || dziesiecLosowan[i] == 25 || dziesiecLosowan[i] == 27 || dziesiecLosowan[i] == 30 || dziesiecLosowan[i] == 32 || dziesiecLosowan[i] == 34 || dziesiecLosowan[i] == 36)
		{
			zmienKolor(4);
			printf("%3d,", dziesiecLosowan[i]);
		}
		else
		{
			zmienKolor(0);
			printf("%3d,", dziesiecLosowan[i]);
		}
	}
	ustawDomyslnyKolor();
	cout << "|" << endl;
	cout << "               ------------------------------------------" << endl;
	system("pause");
	system("cls");
	return dziesiecLosowan;
}
int _tmain(int argc, _TCHAR* argv[])
{
	liczba tablica[37];
	wypelnij_tablice(tablica);
	int ileGraczy = iluGra();

	Gracz *tab;
	tab = new Gracz[ileGraczy];
	nowyGracz(tab, ileGraczy);

	int spin;
	srand(time(NULL));

	vector<int>dziesiecLosowan;
	int licznikLosowan = 0;

	while (true) 
	{
		ustawStawke(tab, ileGraczy);
		obstawPole(tab, tablica, ileGraczy);
		spin = rand() % 36;
		sprawdzWygrana(tab, tablica, ileGraczy, spin);
		wyswietlWynik(tab, tablica, ileGraczy, spin);
		dziesiecLosowan = top10(spin, licznikLosowan, dziesiecLosowan);
		if (licznikLosowan == 9)
		{
			dziesiecLosowan.erase(dziesiecLosowan.begin());
		}
		else
		{
			licznikLosowan++;
		}
		//dziesiecLosowan.push_back(spin); // vector do wyswietlania 10 wynikow;
		//////////////////////////////// 10 ostatnich losowan
		//cout << "              --------------------------------------------- " << endl;
		//cout << "              |            Ostatnie 10 losowan            |" << endl;
		//cout << "               -------------------------------------------" << endl;
		//cout << "               |";
		//for (int i = 0; i <= licznikLosowan; i++)
		//{
		//	if (dziesiecLosowan[i] == 0)
		//	{
		//		zmienKolor(2);
		//		printf("%3d,", dziesiecLosowan[i]);
		//	}
		//	else if (dziesiecLosowan[i] == 1 || dziesiecLosowan[i] == 3 || dziesiecLosowan[i] == 5 || dziesiecLosowan[i] == 7 || dziesiecLosowan[i] == 9 || dziesiecLosowan[i] == 12 || dziesiecLosowan[i] == 14 || dziesiecLosowan[i] == 16 || dziesiecLosowan[i] == 18 || dziesiecLosowan[i] == 19 || dziesiecLosowan[i] == 21 || dziesiecLosowan[i] == 23 || dziesiecLosowan[i] == 25 || dziesiecLosowan[i] == 27 || dziesiecLosowan[i] == 30 || dziesiecLosowan[i] == 32 || dziesiecLosowan[i] == 34 || dziesiecLosowan[i] == 36)
		//	{
		//		zmienKolor(4);
		//		printf("%3d,", dziesiecLosowan[i]);
		//	}
		//	else
		//	{
		//		zmienKolor(0);
		//		printf("%3d,", dziesiecLosowan[i]);			
		//	}
		//}
		//if (licznikLosowan == 9)
		//{
		//	dziesiecLosowan.erase(dziesiecLosowan.begin());
		//}
		//else
		//{
		//	licznikLosowan++;
		//}
		//ustawDomyslnyKolor();
		//cout << "|" << endl;
		//cout << "               ------------------------------------------" << endl;
		//system("pause");
		//system("cls");
	}
	delete tab;
	return 0;
}

