#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num1,num2,sum;
	
	printf("enter number :");
	scanf("%d" ,&num1);
	
	printf("enter number 2 :");
	scanf("%d" ,&num2);
	
	sum=num1+num2;
	
	printf("total :%d" ,sum);
	
	return 0;
}
