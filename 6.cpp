#include<conio.h>
#include<stdio.h>
#include<windows.h>
main()
{
	int opc, num, h, m, s, a, b, c, mayor, suma; 
	char art[30];
	float pre;
	printf("Menu Revoltijo \n 1 Articulo de venta \n 2 Reloj Digital \n 3 Mayor de 3 numeros \n 4 Sumar n numeros consecutivos \nEscoje una opccion: ");
	scanf("%d",&opc);
	switch(opc)
	{
	case 1: printf("Dime el nombre del articulo ");
	fflush(stdin);
	gets(art);
	printf("\nDime el precio del articulo ");
	scanf("%f",&pre);
	 printf("\nDime un numero ");
	scanf("%d",&num);
	if (num > 0){
		printf("\nSe aumenta un 20%% por lo tanto el precio es $ %.2f ", pre * 1.20);
	}
	else 
	 if (num < 0){
	 	printf("\nSe disminuye un 15%% por lo tanto el precio es $ %.2f ", pre * .85);
	 }
	 else
	 {
	 	printf("\n El precio es el mismo $ %.2f ", pre);
	 }
	break; 
	case 2: 
	     for(h=0; h<=23; h++)
	     {
	     	for(m=0; m<=59; m++)
	     	{
	     		for(s=0; s<=59; s++)
	     		{
	     			//Horas 
	     			if(h<10)
	     			{
	     				printf(" 0%d", h);
					 }
					 else 
					 {
					 	printf(": %d ", h);
					 }
					 //Minutos
	     			if(m<10)
	     			{
	     				printf(": 0%d", m);
					 }
					 else 
					 {
					 	printf(": %d ", m);
					 }
					 //Segundos
	     			if(h<10)
	     			{
	     				printf(": 0%d", s);
					 }
					 else 
					 {
					 	printf(" %d ", s);
					 }
					 printf(" \n");
	     			Sleep(1000);
				 }
			 }
		 }
	break;
	case 3:
        printf("\nDime primer numero ");
	    scanf("%d",&a);
	    printf("\nDime segundo numero ");
	    scanf("%d",&b);
	    printf("\nDime tercer numero ");
    	scanf("%d",&c);
    	if (a >=b && a >= c)
    	{mayor = a;
		}
		else
		 if (b >=a && b >=c)
		 {mayor = b;
		 }
		else
		 if (c >=a && c >= b)
		 {mayor = c;
		 }
		 for(m=1; m<=mayor; m++)
		 {
		 printf("\n %d Que onda xd", m);
		 }
	break;
	case 4:
		suma =0;
		printf("\nDime el numero ");
	    scanf("%d",&num);
	    for (m=1; m<=num; m++)
	    {
	    	printf("+ %d ", m);
	    	suma = suma + m; 
		}
	printf("\n El numero consecutivo es = %d", suma);
	break;
	default:
	break;
	}
	getch();	
}
