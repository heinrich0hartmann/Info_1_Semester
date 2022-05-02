#include <iostream>
using namespace std;

int main()
{
	const int pin = 1234;
	const int maxVersuche = 3;
	int BenutzerEingabe;
	start:

	for (int i = 0; i < maxVersuche; i++)
	{
		cout << "Bitte geben Sie den Pin ein: ";
		cin >> BenutzerEingabe;
		if (BenutzerEingabe == pin)
		{
			cout << "Eingabe Erfolgreich, Zugang gew\x84 \bhrt!" << endl;
			cout << "Der Pin war 1234." << endl;
			goto start;
		}
	}
	cout << "Zugang verweigert, Pin inkorrekt!" << endl;

	cin.get();
	return 0;
}