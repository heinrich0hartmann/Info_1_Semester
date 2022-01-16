#include<iostream>
#include<cmath>

using namespace std;
int main()

{
	//Integrieren Messwerte
	const int GROESSE{ 10 }; //Anzahl Messwerte
	int i1;
	double WERTE[GROESSE] = { 99.975, 100.002, 99.999, 99.982, 100.100, 100.009, 99.826, 100.547, 100.023, 100.008 }; //Messwerte

	cout << "Messwerte [m²]" << endl;
	cout << "--------------------" << endl;

	for (i1 = 0; i1 < GROESSE; ++i1)
		cout << WERTE[i1] << endl;

	//Berechnung Mittelwert
	double MITTELWERT;
	double SUMME2 = 0;
	int i2;
	for (i2 = 0; i2 != 10; i2++)
	{
		SUMME2 += WERTE[i2]; //Formel für den Mittelwert
	}
	MITTELWERT = SUMME2 / GROESSE;

	cout << endl << "Mittelwert = " << MITTELWERT << "m²" << endl;

	//Berechnung Varianz
	double VARIANZ;
	double SUMME3 = 0;
	int i3;
	for (i3 = 0; i3 != 10; i3++)
	{
		SUMME3 += pow(((WERTE[i3]) - MITTELWERT), 2); //Formel für die Varianz
	}
	VARIANZ = SUMME3 / (GROESSE - 1);
	cout << "Varianz = " << VARIANZ << " Quadratmeter" << endl;

	return(0);
}