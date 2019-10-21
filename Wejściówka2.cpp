// Wejściówka2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
void wypisz(vector<int>tab)
{
	int i;
	for (i = 0;i < tab.size();i++)
	{
		cout << tab[i] - 1 << ",";
	}
	cout << tab[i - 1] << ".";
}

void wypisz2(vector<int>tab)
{
	for (int i = 0;i < tab.size();i++)
	{
		
		if (tab[i] % 4 == 0)
		{
			cout<<tab[i] << ";";
		}
	}
}
int paliwo_zuzycie(int km, int spalanie)
{
	int zuzycie;
	zuzycie = km * spalanie / 100;
	return zuzycie;

}
vector<int>generuj(int n, int p, int k)
{
	vector<int>tab;
	int num;
	for (int i = 0;i < n;i++)
	{
		num = p + rand() % k - p + 1;
		tab.push_back(num);

	}
	return tab;
}
int main()
{
	srand(time(NULL));
	vector<int>arr = { 4,56,82,9 };
	vector<int>tab;
	int liczba;
	wypisz(arr);
	cout << "\n";
	wypisz2(arr);
	cout <<"\n" <<paliwo_zuzycie(150, 8);
	for (int i = 0;i < 20;i++)
	{
		liczba = 10 + rand() % 10;
		tab.push_back(liczba);
	}
	int suma = 0;
	for (int i = 0;i < 20;i++)
	{
		if (tab[i] % 2 == 0)
		{
			suma += tab[i];
		}
	}
	cout<<"\n" << suma;
	generuj(10, 11, 20);

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
