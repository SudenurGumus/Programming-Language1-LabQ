#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//palindrome or not

int main(int argc, char *argv[]) 
{
	int number,digit,sum,num;
	
	printf("enter number :");
	scanf("%d" ,&number);
	
	num=number;
	
	while (num>0)
	{
		digit=num%10;
		num=num/10;
		sum=(sum*10)+digit;
	
	}
	
    if (sum==number)
    {
	    printf("number is palindrome");
	}
	
	else
	{
		printf("number is not palindrome");
	}

	
	
	return 0;
}
