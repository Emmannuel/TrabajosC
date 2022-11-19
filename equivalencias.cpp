#include<conio.h>
#include<stdio.h>
main()
{
int m=1,n=1;
   do{
       printf("\nTabla  del %d",m);
       n=1;
	   do{
	   printf("\n %d X %d = %d",m,n,m*n);
	   n=n+1; 
	   }while(n<=10); 
	   m=m+1;
	   printf("\n--------------");
   } while(m<=10);
    getch();
}
