#include <stdio.h>
#include <stdlib.h>

//fonsiyona g�nderilan be� say�n�n ortalamas�n� hesaplay�p geri d�nd�ren 

int main(int argc, char *argv[]) 
{
	int dizi[5],i,avg;
	
	for(i=0;i<5;i++)
	{
		printf("sayi giriniz :");
		scanf("%d" ,&dizi[i]);
	}
	
	avg=function(dizi);
	
	printf("ortalama :%d" ,avg);
	
	return 0;
}

int function(int dizi[5])
{
	int sum=0,avg,i;
	
	for(i=0;i<5;i++)
	{
		sum=sum+dizi[i];
	}
	
	avg=sum/5;
	
	return avg;
}
