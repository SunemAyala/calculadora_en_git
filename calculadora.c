#include <stdio.h>

int main()
{
	printf("Calculadora\n");
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicacion\n");
	printf("4. Division\n");
	printf("5. Salir\n");

	int opcion;
	printf("Seleccione una opcion: ");
	scanf("%d", &opcion);

	if (opcion == 5)
	{
		return 0;
	}

	float a, b;
	printf("Ingrese el primer numero: ");
	scanf("%f", &a);
	printf("Ingrese el segundo numero: ");
	scanf("%f", &b);

	float resultado;
	switch (opcion)
	{
	case 1:
		// Se meanda llamar la funcion suma
		break;
	case 2:
		// Se meanda llamar la funcion resta
		break;
	case 3:
		// Se meanda llamar la funcion multiplicacion
		break;
	case 4:
		// Se meanda llamar la funcion division
		break;
	default:
		printf("Opcion invalida\n");
		return 1;
	}

	return 0;
}

// Sunem pon el codigo de las funciones suma, resta

// Salvador pon el codigo de las funciones multiplicacion, division
