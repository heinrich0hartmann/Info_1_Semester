#include <iostream>
using namespace std;

int main()
{
	int alpha = 10;		//Variable alpha = 10
	int* pointer1;		//Pointer 1 Eingeführt
	int* pointer2;		//Pointer 2 Eingeführt

	pointer1 = &alpha;								//Im Pointer 1 wird alpha gespeichert
	cout << pointer1 << " " << *pointer1 << endl;	//Es wird die Adresse 1 Ausgegeben und der in Pointer 1 gespeicherte Wert *!

	*pointer1 = 32;									//Im Pointer 1 wird 32 gespeichert
	cout << pointer1 << " " << *pointer1 << endl;	//Es wird Adresse 1 Ausgegeben und die neu gespeicherte 32

	*pointer1 += 8;									//Auf die in 1 gespeicherte 32 werden 8 addiert
	pointer2 = pointer1;							//Pointer 2 wird die Adresse von 1 zugewiesen
	cout << pointer2 << " " << *pointer2 << endl;	//Es wird also Adresse 1 ausgegeben und 40 wegen 32+8
	system("pause");
		return 0;
	//Programmausgabe:
	//Adresse Pointer1 10
	//Adresse Pointer1 32
	//Adresse Pointer1 40
}
