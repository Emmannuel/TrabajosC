/* Ventana de acesso a un sistema */
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  

main()
{
	int m,columna=38,acceso=1;
	char usa[25],pass[25];
	for(m=1;m<=10;m++){
		gotoxy(35,18); printf("Cargando... %d %%",m*10);
		gotoxy(columna,20); printf("%c",178);
		columna=columna+1;
		Sleep(100);
	}
	while(acceso<=3){
	system("cls");
	gotoxy(35,12); printf("Bienvenido al sistema...");
	gotoxy(35,14); printf("Dime tu nombre de usuario: ");
    gotoxy(65,14); fflush(stdin); gets(usa);
    gotoxy(35,16); printf("Dime tu password: ");
    gotoxy(65,16); fflush(stdin); gets(pass);
    if((strcmp(usa,"andres")==0) && (strcmp(pass,"lol")==0)){
	gotoxy(20,21);	printf("Usuario y contraseña correctos.");
	Sleep(3000);
	break;
	} else {
	gotoxy(20,21);	printf("Usuario y contraseña incorrecto. Intento: %d",acceso);
		Sleep(1000);
	}
	acceso=acceso+1;
}
	system("cls");
	printf("\nHasta la vista baby");
	getch();
}
