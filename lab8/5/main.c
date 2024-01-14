#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int fahrenheit,celsius;
	
	printf("enter fahrenheit :");
	scanf("%d" ,&fahrenheit);
	
	celsius=(fahrenheit-32)/1.8;
	
	printf("celsius :%d" ,celsius);
	
	
	return 0;
}
