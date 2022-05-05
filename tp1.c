/*
 * Desarrollar un programa que permita calcular el valor de la función 𝑓(𝑥) 
 * para el valor de 𝑥 ingresado y muestre su resultado por pantalla.
 * 𝑓(𝑥) = 3𝑥 + 2
 */

#include <stdio.h>

int main (void)

{
	float valorx;
	float resultado;
	
	printf ("Ingrese el valor de x para la funcion 𝑓(𝑥) = 3𝑥 + 2\n");
	scanf ("%f",&valorx);
 	resultado = 3 * valorx + 2 ;
 	
 	printf ("El valor de la funcion 𝑓(𝑥) = 3𝑥 + 2 es %.2f redondeado con dos decimales\n", resultado );



	return 0;
}
