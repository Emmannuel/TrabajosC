#include<conio.h>
#include<windows.h>
#include<stdio.h>
main()
{
	float numeros[6],may,men;
	for(int x=0;x<6;x++){
		printf("\n Dame el numero para posicion %d del arreglo ",x);
	    scanf("%f",&numeros[x]);
	}
	for(int x=0;x<6;x++){
		printf("\nEn posicion %d del arreglo tienes %.2f",x,numeros[x]);
		if(x==0){
			may=numeros[x];
			men=numeros[x];
		} else {
			if(numeros[x]>may){
				may=numeros[x];
			} else {
				if(numeros[x]<men){
					men=numeros[x];
				}
			}
		}
	}
	printf("\nEl numero mayor es: %.2f",may);
	printf("\nEl numero menor es: %.2f",men);
	getch();
}
