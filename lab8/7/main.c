#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int A,B,C;
	
	printf("enter A :");
	scanf("%d" ,&A);
	
	printf("enter B :");
	scanf("%d" ,&B);
	
	printf("enter C :");
	scanf("%d" ,&C);
	
	if (A>B && A>C)
	{
		printf("largest number is A");
	}
	
	else if (B>A && B>C)
	{
		printf("largest number is B");
	}
	
	else
	{
		printf("largest number is C");
	}
	
	return 0;
}
