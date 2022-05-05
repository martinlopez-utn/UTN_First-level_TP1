/* Diseñe un algoritmo para mostrar el mensaje APROBADO si la nota final 
 * de un estudiante es mayor o igual que 6, y el mensaje DESAPROBADO 
 * en caso contrario.
 */
  
 #include <stdio.h>
 
 int main (void)
 
 {
 	float nota;
 		
	printf ("Ingrese la nota final del estudiante\n");
	scanf ("%f",&nota);
	
  	if ((nota>=1)&&(nota<=10))
	{
		if (nota>=6)
		
		printf ("APROBADO\n");
		
		else 
		
		printf ("DESAPROBADO\n");
	}
		
	else 
	
	{
		printf ("La nota debe ser entre 1 y 10\n");
	}
 
 
 	return 0;
 }
