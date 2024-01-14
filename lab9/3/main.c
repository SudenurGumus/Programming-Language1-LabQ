#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//1000 ve 2000 arasýndaki çift sayýlar

int main(int argc, char *argv[]) 
{
	int counter;
	
	counter=1000;
	
	while (counter<2001)
	{
		printf("%d\n" ,counter);
		counter=counter+2;
	}
	
	
	
	
	
	return 0;
}
