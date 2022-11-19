/* Matriz de 3 x 3. Llenarlo, mostar, sumar filas, sumar columnas y diagonales. */
#include<conio.h>
#include<windows.h>
#include<stdio.h>
main()
{
	int matriz[3][3],suma,aux;
	printf("\n Llenando la matriz\n");
	for(int f=0;f<3;f++){
		for(int c=0;c<3;c++){
			printf("Dame valor para posicion %d - %d: ",f,c);
			scanf("%d",&matriz[f][c]);
		}
	}
	//Mostrar el simulando del llenado.
printf("\n \nEn memorias mas o menos queda asi: \n");
		for(int f=0;f<3;f++){
		for(int c=0;c<3;c++){
			printf("  %d  ",matriz[f][c]);
		}
		printf(" \n");
	}
	//Sumando filas
		for(int f=0;f<3;f++){
			suma=0;
		for(int c=0;c<3;c++){
		suma=suma+matriz[f][c];
		}
		printf("\n La suma de la fila %d es: %d",f+1,suma);
	}
		//Sumando columnas
		for(int f=0;f<3;f++){
			suma=0;
		for(int c=0;c<3;c++){
		suma=suma+matriz[c][f];
		}
		printf("\n La suma de la columna %d es: %d",f+1,suma);
	}
			//Suma diagonal 1
			suma=0;
		for(int c=0;c<3;c++){
		suma=suma+matriz[c][c];
	}
	printf("\n La suma de la diagonal 1 es: %d",suma);
			//Suma diagonal 2
			suma=0;
			aux=2;
		for(int c=0;c<3;c++){
		suma=suma+matriz[aux][c];
		aux=aux-1;
	}
	printf("\n La suma de la diagonal 2 es: %d",suma);
	getch();
}
