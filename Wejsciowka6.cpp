// Wejsciowka6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <ctime>
#include <vector>
using namespace std;
bool czyNalezy(vector<int>tab, int element)
{
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] == element)
			return true;
	}
	return false;
}
bool czyZawiera(vector<int>a, vector<int>b)
{
	for (int i = 0; i < b.size(); i++)
	{
		if (!czyNalezy(a, b[i]))
			return false;
	
	}
	return true;
}
int index(vector<int>tab, int element)
{
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] == element)
			return i;
	}
	return -1;
}
vector<int>unikalnosc(vector<int>tab)
{
	int wynik;
	vector < int>arr;
	for (int i = 0; i < tab.size(); i++)
	{
		if (!czyNalezy(arr, tab[i]))
			arr.push_back(tab[i]);
	}
	return arr;
}
int potega(double a, double b)
{
	int wynik = 1;
	for (int i = 0; i < b; i++)
	{
		wynik *= a;
	}
	return wynik;
}
void wypisz(vector<int>tab)
{
	for (int i = 0; i < tab.size(); i++)
	{
		cout << tab[i] << ",";
	}
}
vector<int>generuj(int n, int p, int k)
{
	vector < int>arr;
	int wynik;
	for (int i = 0; i < n; i++)
	{
		wynik = rand() % (k - p + 1) + p;
		arr.push_back(wynik);
	}
	return arr;
}
vector<int>vybierz(vector<int>tab,int dzielnik,int reszta=0)
{
	vector<int>arr;
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] % dzielnik == reszta)
		{
			arr.push_back(tab[i]);
		}
	}
	return arr;
}
int suma(vector<int>tab)
{
	int suma = 0;
	for (int i = 0; i < tab.size(); i++)
	{
		suma += tab[i];
	}
	return suma;
}
int main()
{
   
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
