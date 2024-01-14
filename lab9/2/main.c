#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
   int counter,number,fac;
   
   printf("enter number :");
   scanf("%d" ,&number);
   
   counter=number;
   
   while (counter>0)
   {
     fac=fac*counter;
     counter=counter-1;
   }
   	
   printf("factorial :%d" ,fac);
	
	
	
	return 0;
}
