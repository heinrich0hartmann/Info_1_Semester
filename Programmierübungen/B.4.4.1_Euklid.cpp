#include<iostream>
using namespace std;

int ggt (int x, int y);

int main() 
{
	int x, y;
	cout << "Der Euklidische Algorithmus";
	cout << "Gesucht wird der groeste gemeinsame Teiler von zwei positiven ganzen Zahlen \n";
	cout << "Zahl_1 ";
	cin >> x;
	cout << "Zahl_2 ";
	cin >> y;
	cout << "Groesster gemeinsamer Teiler ist: " << ggt(x, y);
 }

int ggt(int x, int y)
{
	int r;
	do
	{
		if (x < y)
		{
			r = x;
			x = y;
			y = r;
}
		r = x % y;
		if (r != 0)
		{
			x = y;
			y = r;
		}	
	} while (r!=0);
	return(y);
}

 

