#include <stdio.h>
#include <stdlib.h>

//8 elemanl� float diziye klavyeden de�er girin, girilen de�erlerin ortalamas�n� hesaplay�p ekrana yazd�r�n.

int main(int argc, char *argv[]) 
{
	float dizi[8];
	int i,toplam,ortalama;
	
	for(i=0;i<8;i++)
	{
		printf("sayi giriniz :");
		scanf("%f" ,&dizi[i]);
	}
	
	for(i=0;i<8;i++)
	{
		printf("%f\n" ,dizi[i]);
	}
	
	for(i=0;i<8;i++)
	{
		toplam=toplam+dizi[i];
	}
	
	ortalama=toplam/8;
	
	printf("dizinin ortalamasi :%d" ,ortalama);
	
	return 0;
}
