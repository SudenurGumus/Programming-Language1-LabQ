#include <stdio.h>
#include <stdlib.h>

//karenin alan�n� hesaplayan fonksiyon (mainde �al��s�n)

int main(void) 
{
   int a,alan;
   printf("kenar uzunlugunu giriniz :");
   scanf("%d" ,&a);	
   
   alan=function(a);
   
   printf("karenin alani :%d" ,alan);

	
	return 0;
}

int function(int a)
{
	int alan;
	
	alan=a*a;
	
	return alan;
}



