/* Arreglo de tipo flotantes para obtener el promedio */
#include<conio.h>
#include<windows.h>
#include<stdio.h>
main()
{
	float cal[4],suma=0,pro;
		 //Llenar el arreglo
	for(int x=0;x<4;x++){
	    printf("\n Dame la calificacion para %d del arreglo: ",x);
	    scanf("%f",&cal[x]);
	    suma=suma+cal[x];
	}
	pro=suma/4;
		for(int x=0;x<4;x++){
	    printf("\n En la posicion %d del arreglo tienes: %.2f",x,cal[x]);
	}
	printf("\nEl promedio de los valores del arreglo es: %.2f",pro);
	getch();
}
