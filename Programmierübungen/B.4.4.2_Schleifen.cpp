#include<iostream>
using namespace std;

int main()
{
	int i, k, n;

	i = 101, k = 5, n = 10;
	while (i > 0) k = 2 * k;		//Die Bedingung der Schleife ist dauerhaft erfüllt, deshalb wird die Schleife endlos ausgeführt, da i konstant >0 ist.

	i = 101, k = 5, n = 10;
	while (i != 0) i = i - 2;		//Da 101 eine Ungerade Zahl ist und fortllaufend mit 2 subtrahiert wird, landet die Schleife irgendwann bei 1, wird sie weiter mit 2 Subtrahiert endet Sie so im Minusbereich und wird nie =0 sein und endet so in einer Endlosschleife.

	i = 101, k = 5, n = 10;
	while (n != i)					//Aufgrund desssen, dass i immer mit 1 addiert und mit 2 multipliziert wird, n aber immer gleich bleibt ist die Bedingung n != i immer erfüllt und die Schleife läuft unendentlich.
	{
		++i;
		n = 2 * i;
	}
}