#include <iostream>

using namespace std;

int main()
{
	int x[]{ 5, 3, 5, 7, 1, 6, 12 };

	int groesse = sizeof(x) / sizeof(x[0]);
	int min = x[0];
	int index = 0;

	int i;
	for (i = 1; i < groesse; i++)
	{
		if (x[i] < min)
		{
			index = i;
			min = x[i];
		}
	}
	cout << "Index Position: " << index << endl;
	cout << "Kleinstes Element: " << min << endl;
	system("pause");
	return 0;
}