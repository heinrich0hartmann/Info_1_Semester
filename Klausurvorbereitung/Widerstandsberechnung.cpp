#include <iostream>
using namespace std;

int main()
{
	float R; //Widerstand
	float U; //Spannung
	float I; //Stromstärke

	anfang:
	cout << "Bitte geben Sie die Spannung an: ";
	cin >> U;
	cout << "Bitte geben Sie die Stromst\x84 \brke an: ";
	cin >> I;

	if ((U <= 0) || (I <= 0))
	{
		cout << "Bitte geben Sie einen positiven Wert für U/I ein!";
			goto anfang;
	}
	else
	{
		R = U / I;
		cout << "Ihr Widerstand betr\x84 \bgt: " << R << "Ohmen" << endl;
		goto anfang;
	}
	return 0;
}