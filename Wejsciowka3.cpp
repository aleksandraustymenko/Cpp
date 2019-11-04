// Wejsciowka3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
vector<int>wybierz(vector<int>tab, int dzielnik,int reszta=0)
{
	vector<int>wynik;
	for (int i = 0;i < tab.size();i++)
	{
		if (tab[i] % dzielnik == reszta)
		{
			wynik.push_back(tab[i]);
		}
	}
	return wynik;
}
int suma(vector<int>tab)
{
	int suma = 0;
	for (int i = 0;i < tab.size();i++)
	{
		suma += tab[i];
	}
	return suma;
}
void wypisz(vector<int>tab)
{
	for (int i = 0;i < tab.size();i++)
	{
		cout << tab[i] << ",";
	}
}
vector <int> generuj(int n, int p, int k)
{
	vector<int>tab;
	int wynik;
	for (int i = 0;i < n;i++)
	{
		wynik = rand() % (k - p + 1) + p;
		tab.push_back(wynik);
	}
	return tab;
}
int main()
{
	srand(time(NULL));
	vector<int>arr = { 4,5,6 };
	vector<int>tab =wybierz(arr,2,0);
	cout << suma(tab);

	

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
