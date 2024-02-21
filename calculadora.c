#include <stdio.h>

float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);

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
		resultado=suma(a,b);
		printf("El resultado es igual a: %f",resultado);
		
		break;
	case 2:
		// Se meanda llamar la funcion resta
		resultado=resta(a,b);
		printf("El resultado es igual a: %f",resultado);
		
		break;
	case 3:
		// Se meanda llamar la funcion multiplicacion
		resultado = multiplicacion(a, b);
		printf("El resultado es: %f", resultado);
		break;
	case 4:
		// Se meanda llamar la funcion division
		resultado = division(a, b);
		printf("El resultado es: %f", resultado);
		break;
	default:
		printf("Opcion invalida\n");
		return 1;
	}
	return 0;
}

// Sunem pon el codigo de las funciones suma, resta
		float suma(float a, float b)
			{
				return a + b;
			}
		float resta(float a, float b)
			{
    			return a - b;
			}
// Salvador pon el codigo de las funciones multiplicacion, division

float multiplicacion(float a, float b)
{
	return a * b;
}

float division(float a, float b)
{
	return a / b;
}
