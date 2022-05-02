#include <iostream>
using namespace std;

bool berechne_knicklast(float E, float L, float d, float s, float* pFk, float* pI);

int main()
{
	float E; //Elastizitätsmodul
	float L; //Rohrlänge
	float d; //Durchmesser
	float s; //Wandstärke
	float Fk; //Knicklast
	float I; //Flächenträgheitsmoment

	//Werteingabe abfragen
	cout << "Bitte Elastizit\x84tsmodul eingeben: ";
	cin >> E;
	cout << "Bitte Rohrl\x84nge eingeben: ";
	cin >> L;
	cout << "Bitte Durchmesser eingeben: ";
	cin >> d;
	cout << "Bitte Wandst\x84rke eingeben: ";
	cin >> s;

	if (berechne_knicklast(E, L, d, s, &Fk, &I) == false)
	{
		cout << "Fehlerhafte Eingabewerte f\x81r die Berechnung der Knicklast.";
	}
	else
	{
		cout << "Knicklast: " << Fk << endl;
		cout << "Fl\x84\chentr\x84gheitsmoment: " << I << endl;
	}
	system("pause");
	return 0;
}

//Berechnung Programmieren
bool berechne_knicklast(float E, float L, float d, float s, float* pFk, float* pI)
{
	const float PI{ 3.14159265359f };
	if ((E <= 0.0f) || (L <= 0.0f) || (d <= 0.0f) || (s <= 0.0f))
		return false;
	*pI = PI * d * d * d * s / 8.0f;
	*pFk = PI * PI * E * *pI / 4.0f / L / L;
	return true;
}