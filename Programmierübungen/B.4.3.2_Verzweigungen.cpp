#include<iostream>
using namespace std;

int main()
{
	int i, j;

	i = 0; j = -5;
	if (i++ || j++) ++i;				// Zuerst weden Die Variablen i,j in den Datentyp bool convertiert, dabei werden alle werte die von 0 abweichen zu true
										//und alle die =0 sind werden zu false, da beim logischen Oder der Zweite wert nur bearbeitet wird, wenn der erste false ist werden
										//hier alle bearbeitet d.h. (0=false ODER -5=true) und i anschlieﬂend +1 also i+1+1 und j+1 = i:2 und j:-4
										//i++ bedeutet Inkrementierung nach Rechnung, ++i Inkrementierung vor Rechnung
	cout << i << ',' << j << endl;
	i = 1; j = -5;
	if (i++ || j++) ++i;				//Da die erste Bedingung i (1) als true gilt wird die zweite nicht bearbeitet d.h. (1=true ODER xxxx) und es wird i+1+1 gerechnet und
										//j bleibt gleich, also i:3 und j:5
	cout << i << ',' << j << endl;
	i = 0; j = -5;
	if (i++ && j++) ++i;				//Hier sind die Variablen durch das Logische UND verkn¸pft, es m¸ssen also beide Bedingungen erf¸llt sein (true / true), da jedoch i schon als 
										//bool false gilt wird abgebrochen und nur i +1 Inkremetiert, da die Bedingung nicht erf¸llt wurdr wird auch i nicht nachtr‰glich nochmal Inkrementiert.
										//i:1 und j:-5
	cout << i << ',' << j << endl;
	i = 1; j = -5;
	if (i++ && j++) ++i;				//Die Bedingungen Boolsch true und true sind (1/1) werden auch beide Inkrementiert und anschlieﬂend noch i um eins Inkrementiert i:3 und j:-4
	cout << i << ',' << j << endl;

}

