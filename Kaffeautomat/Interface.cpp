#include <iostream>
using namespace std;
int main()
{
	char x;
	system("cls");
	cout << "Herzlich Wilkommen beim Kaffeautomaten!\nBitte wählen Sie aus :\n(k) Kaffe\n(e) Espresso\n(s) Service- Mode\n";
	cin >> x;
	cout << "Sie haben sich für die Auswahl " << x << "entschieden\n";
}