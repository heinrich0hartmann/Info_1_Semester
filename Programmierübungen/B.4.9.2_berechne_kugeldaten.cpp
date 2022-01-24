#include <stdio.h>

int main(void)
{
	const float PI = 3.141592f;

	float r; /* Radius der Kugel */
	float V; /* Volumen der Kugel */
	float O; /* Oberflaeche der Kugel */

	// Radius abfragen.
	printf("Bitte geben Sie den Radius ein: ");
	scanf("%f", &r);

	if (r < 0)
	{
		printf("Sie muessen einen positiven Wert eingeben!");
		return 0;
	}
		else
		{
		// Volumen der Kugel berechnen und ausgeben.
		V = (4.0f / 3.0f) * PI * (r * r * r);
		printf("Volumen der Kugel: %f\n", V);

		// Oberflaeche der Kugel berechnen und ausgeben.
		O = 4.0f * PI * (r * r);
		printf("Oberflaeche der Kugel: %f\n", O);

		getchar();
		getchar();

		return 0;
	}
}