#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int number;
	
	printf("enter number :");
	scanf("%d" ,&number);
	
	
	if (number%2==0)
	{
		printf("number is even");
	}
	
	else
	{
		printf("number is odd");
	}
	
	
	return 0;
}
