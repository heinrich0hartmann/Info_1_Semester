#include<iostream>
using namespace std;

int main()
{

int a = 2;
int b = 1;

a = b = 2;										//a=2: b wird der Wert 2 zugewiesen und dann wird a der Wert von b zugewiesen
a = 5 * 3 + 2;									//a=17: denn 5*3 = 15 und plus 2 = 17 (Punkt vor Strich)
a = 5 * (3 + 2);								//a=25: (Klammer vor Multiplikation)
a *= 5 + 5;										//a=250: zuerst wird 5+5 gerechnet, anschlieﬂend mit 25 aus der Vorherigen Zeile multipliziert
a %= 2 * 3;										//a=4: 2*3 =6 anschlieﬂend wird mit % die Ausgangszahl 250 durch 6 geteilt, der Rest ist dann a
a = !(--b == 0);								//a=1: er vergleicht ob b (2)= 0 ist, das ist fals, alos 0, das ! negiert die Klammer und a wird 1
a = 0 && 0 + 2;									//a=0: Der Algorythmus fragt ab ob a 0 oder 2 ist, da a=1 ist ist¥ es fals und a=0
a = b++ * 2;									//a=2: weil b=1 und das *2 =2 ist
a = -5 - 5;										//a=-10
a = -(+b++);									//a=-2: 
a = 5 == 5 && 0 || 1;							//a=1: es wir festgelegt, dass a=5 ist wenn a=5 oder a=0 ist, a ist aber 2, also ist es falsch die 1 legt a bei falsch als 1 fest
a = ((((((b + b) * 2) + b) && b || b)) == b);	//a=0: ((1+1)*2)+1)= 5, jetzt wird 5 mit 1 verglichen ist falsch, also 0 anschlieﬂend durch || auf b gelegt, also wieder 1 und dann als ungleich falsch deklariert also 0
a = b + ++b;									//a=8: b=4 deklariert und dann mit b addiert also 4+4=8
a = sizeof(int) * sizeof(a);					//a=16: int ist 4 groﬂ und a=(0100bin) also 4 groﬂ  ist ist es 4*4

24 return 0;

}
