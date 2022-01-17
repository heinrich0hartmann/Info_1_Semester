#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	double* werte;
	int n;
	cout << "Wie viele Messwerte wollen Sie im Heap speichern?" << endl; //Abfrage Werte
	cout << "Eingabe: ";
	cin >> n;
	werte = new double[n]; //Initialisierung Werte
	if (werte == 0)
	{
		cout << endl << "Nicht gen\x9Agend Speicherplatz vorhanden" << endl;
		system("pause");
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Bitte geben Sie einen Ihrer Messwerte ein: " << endl;
		cin >> *(werte + i);
	}
	cout << endl << "Ihre Messwerte: " << endl;
	for (int i = 0; i < n; ++i)
	{
		cout << *(werte + i) << endl;
	}
	double Mittelwert;
	double SummeM = 0;

	for (int i = 0; i != n; i++)
	{
		SummeM += *(werte + i);
	}
	Mittelwert = SummeM / n;
	cout << endl << "Mittelwert: " << Mittelwert << "m" << endl;
	
	double Varianz;
	double SummeV = 0;

	for (int i = 0; i != n; i++)
	{
		SummeV += pow(((werte[i]) - Mittelwert), 2); 
	}
	Varianz = SummeV / (n - 1);
	cout << endl << "Varianz: " << Varianz << "Meter" << endl; 

	delete[] werte; //Befehle alle Heap Dateien Löschen

}