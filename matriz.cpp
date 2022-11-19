/* Matriz de 3 x 2 */
#include<conio.h>
#include<windows.h>
#include<stdio.h>
main()
{
	int matriz[3][2];
	printf("\n Llenando la matriz\n");
	for(int f=0;f<3;f++){
		for(int c=0;c<2;c++){
			printf("Dame valor para posicion %d - %d: ",f,c);
			scanf("%d",&matriz[f][c]);
		}
	}
	printf("\nMostrando los valores de la matriz");
		for(int f=0;f<3;f++){
		for(int c=0;c<2;c++){
			printf("\nEn posicion %d - %d tienes %d ",f,c,matriz[f][c]);
		}
	}
	//Mostrar el simulando del llenado.
printf("\n \nEn memorias mas o menos queda asi: \n");
		for(int f=0;f<3;f++){
		for(int c=0;c<2;c++){
			printf("  %d  ",matriz[f][c]);
		}
		printf(" \n");
	}
	getch();
}
