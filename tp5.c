/*
 * Desarrollar programa que permita pedir por pantalla una cantidad de 
 * metros cuadrados y luego el costo del metro cuadrado. 
 * La cantidad de metros debe estar entre 1 y 100, mientras que el 
 * costo del metro cuadrado debe estar entre $100 y $5.000. 
 * Imprima el total aplicando un 5% de descuento sobre el neto (cantidad * costo)
 */
 
 #include <stdio.h>

int main (void)

{
	int metro;
	float cmetro;
	float total;
	float totdesc;
	
	printf ("Ingrese METROS CUADRADOS a calcular\n");
	scanf ("%d",&metro);

	printf ("Ingrese COSTO DEL METRO CUADRADO\n");
	scanf ("%f",&cmetro);
	
	if ((metro>=1)&&(metro<=100)&&(cmetro>=100)&&(cmetro<=5000))
	
	{	
		total = metro * cmetro;
		totdesc = total * 0.95;
		
		printf ("El costo total es $%.2f, pero le damos un descuento del 5%% por lo que le queda en $%.2f\n",total,totdesc);
	}
	
	else 
	
	{
	
		printf ("La cantidad de metros debe estar entre 1 y 100, inclusive. Mientras que el costo del metro cuadrado debe estar entre $100 y $5.000, inclusive.\n");
		
	}
	
	return 0;
}
