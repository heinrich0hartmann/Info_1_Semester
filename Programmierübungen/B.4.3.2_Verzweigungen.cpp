#include<iostream>
using namespace std;

int main()
[
int i, j;

i = 0; j = -5;
if (i++ || j++) ++i;				//
cout << i << `,´ << j << endl;
i = 1; j = -5;
if (i++ || j++) ++i;				//
cout << i << `,´ << j << endl;
i = 0; j = -5;
if (i++ && j++) ++i;				//
cout << i << `,´ << j << endl;
i = 1; j = -5;
if (i++ && j++) ++i;				//
cout << i << `,` << j << endl;

]