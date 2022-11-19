/* Arreglo de tipo entero */
#include<conio.h>
#include<windows.h>
#include<stdio.h>
main()
{
	int arre[5]={8,10,17,21,-4};
	for(int x=0;x<5;x++){
	    printf("Dame valor para posicion %d para el arreglo: ",x);
		scanf("%d",&arre[x]);
	} //Mostrar los valores del arreglo
	for(int x=0;x<5;x++){
	    printf("\n En la posicion %d del arreglo tienes: %d",x,arre[x]);
	}
	getch();
}
