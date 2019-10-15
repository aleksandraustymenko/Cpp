// Pasja1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
/*int uczniowe,cukierki,x,y;
int main()
{
	cout << "Ile uczniow jest w twojej klasie:";
	cin >> uczniowe;
	cout << "Ile cukierkow kupila mama:";
	cin >> cukierki;
	x = cukierki / (uczniowe - 1);
	y = cukierki - x*(uczniowe-1);
	cout << "Cukierki dla kazdego ucznia: " << x;
	cout << endl<<"J dostanie cukierkow : " << y ;
}*/
/*string PIN;
int main()
{
	cout << "Witaj w naszym banku!" << endl;
	cout << "Podaj numer PIN:";
	cin >> PIN;
	if (PIN == "1729")
	{
		cout << "Poprawny PIN";
	}
	else
	{
		cout << "Nipoprawny PIN";
	}

	return 0;
}*/
/*
string login, haslo;
int main()
{
	cout << "Podaj login:";
	cin >> login;
	cout << "Podaj haslo:";
	cin >> haslo;
	if (login == "admin" && haslo == "szarlotka")
	{
		cout << "Udalo sie zalogowac";
	}
	else
	{
		cout << "nie udalo sie zalogowac";
	}
}*/
/*int wiek;
int main()
{
	cout << "Ile masz lat: ";
	cin >> wiek;
	if (wiek < 18)
		cout << "Jestes niepelnoletni i nie mozesz kandydowac na prezydenta";
	else if (wiek >= 18 && wiek < 35)
		cout << "Jestes pelnoletni ale nie mozesz kandydowac na prezydenta";
	else
		cout << "Jestes pelnoletni i mozesz kandydowac na prezydenta";
}
*/
/*int main()
{
	for (int i = 1;i <= 10;i++)
	{
		cout << i << endl;
	}
	return 0;
}*/
/*#include <windows.h>
#include <cstdlib>
int main()
{
	for (int i = 15;i >= 0;i--)
	{
		Sleep(1000);
		system("cls");
		cout << i << endl;
	}
	cout << "Jebut";
	return 0;
}*/
/*int main()
{
	string imie;
	int liczba;
	cout << "Podaj imie: ";
	cin >> imie;
	cout << "Podaj numer: ";
	cin >> liczba;
	for (int i = 1;i <= liczba;i++)
	{
		cout << i <<". " << imie<<endl;
	}
	return 0;
}*/
int main()
{
	int bakteria=1, godzin=0;
	while (bakteria<=1000000000)
	{
		godzin++;
		bakteria = bakteria*2;
		cout << "minelo godzin: " << godzin;
		cout << "liczba bakterii: " << bakteria << endl;
	}
	return 0;
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
