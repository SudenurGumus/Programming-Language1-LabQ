#include <stdio.h>
#include <stdlib.h>
#define size 10

//10 elemanl� diziyi klavyeden alan ve tersten ekrana yazd�ran kod

int main(int argc, char *argv[]) 
{
    int dizi[size],i;
	
	for(i=0;i<size;i++)
	{
		printf("sayi giriniz :");
		scanf("%d" ,&dizi[i]);
	}
	
	for(i=size-1;i>=0;i--)
	{
		printf("%d\n" ,dizi[i]);
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
