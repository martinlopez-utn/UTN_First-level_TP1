/* 
 * Desarrollar programa que permita calcular el área de un triángulo. 
 * Recuerde que la fórmula a utilizar es: area= (base*altura)/2), 
 * además valide que la base y la altura sean mayores a cero. 
 * Al terminar imprima el resultado obtenido.
 */
 
  #include <stdio.h>
 
  int main (void)
 
 {
 	float base;
 	float altura;
 	float area;
 		
	printf ("Ingrese el valor de la base en cm\n");
	scanf ("%f",&base);
	
	printf ("Ingrese el valor de la altura en cm\n");
	scanf ("%f",&altura);
	
  	if ((base>=0)&&(altura>=0))
	{	
		area = (base * altura)/2;
	
		printf ("El area del triangulo es %.2f cm, redondeado con dos decimales\n", area);	
	}
	else 
			
		printf ("Los valores de base o altura no pueden ser negativos o cero\n");
		
	return 0;
}
