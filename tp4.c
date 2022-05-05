/* 
 * Desarrollar programa que permita calcular el promedio de 3 notas. 
 * Luego debe obtener la situación final que refleja el promedio, ya sea 
 * aprobado o reprobado. Considere validar que las notas estén entre 1 y 7. 
 * Al terminar imprima la situación junto con el promedio.
 */

#include <stdio.h>

int main (void)

{
	float nota1;
	float nota2;
	float nota3;
	float promedio;
	
	printf ("Ingrese nota 1\n");
	scanf ("%f",&nota1);

	printf ("Ingrese nota 2\n");
	scanf ("%f",&nota2);

	printf ("Ingrese nota 3\n");
	scanf ("%f",&nota3);
	
	  	if ((nota1>=1)&&(nota1<=7)&&(nota2>=1)&&(nota2<=7)&&(nota3>=1)&&(nota3<=7))
	{
	
		promedio = (nota1 + nota2 + nota3) / 3;
		
		{
		
		if (promedio>=6)
		
		printf ("APROBADO. La nota final es %.2f\n",promedio);
		
		else 
		
		printf ("DESAPROBADO. La nota final es %.2f\n",promedio);
		
		}
		
	}
		
		else 
	
	{
	
		printf ("Las notas deben ser entre 1 y 7\n");
		
	}

	return 0;
}
