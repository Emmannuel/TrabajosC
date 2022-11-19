//Arreglo de tipo cadena que regrese una cadena volteada
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<windows.h>
main()
{

char frase[25];
int cuenta;
printf("\n Dime una frase o palabra ");
fflush(stdin);
gets(frase);
cuenta= strlen(frase);
printf("\nLa palabra volteada a reves es: \n");
for(int m=cuenta-1;m>=0;m--){
	printf("%c",frase[m]);
}
getch();
}
