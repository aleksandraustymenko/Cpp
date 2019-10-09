// Wejściowka.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
using namespace std;
int min(vector<int>tab)
{
	int wynik = tab[0];
	for (int i = 1;i < tab.size();i++)
	{
		if (wynik > tab[i])
			wynik = tab[i];
	}
	return wynik;
}
int max(vector<int>tab)
{
	int wnk = tab[0];
	for (int i = 1;i < tab.size();i++)
	{
		if (wnk < tab[i])
			wnk = tab[i];
	}
	return wnk;

}
void  wypisz(vector<int>tab)
{
	for (int i = 0;i < tab.size();i++)
	{
		cout << tab[i] << ", ";
	}
	cout << "\n";
}
int dodaj(int a, int b)
{
	return a + b;
}
int main()
{
	std::cout << "WDP jest super\n";
	int zm1 = 5;
	int zm2 = 8;
	vector<int> tab = { 8,3,1};
	std::cout << dodaj(zm1, zm2);
	cout << "\n";
	wypisz(tab);
	std::cout << min(tab);
	cout << "\n";
	std::cout << max(tab);
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
