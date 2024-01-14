#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int feet,centimeter;
	
	printf("enter feet :");
	scanf("%d" ,&feet);
	
	centimeter=feet*30.48;
	
	printf("centimeter :%d" ,centimeter);
	
	return 0;
}
