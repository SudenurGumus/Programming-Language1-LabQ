#include <stdio.h>
#include <stdlib.h>
#define size 5

//maksimum 5 basamaklý sayýnýn basamaklarýndaki rakamlarý diziye atan ve ekrana yazdýran kod

int main(int argc, char *argv[]) 
{
	int sayi,basamaksayisi,tempsayi;
	int dizi[size],i;
	
	
	
	printf("sayi giriniz :");
	scanf("%d" ,&sayi);
	
	tempsayi=sayi;
	while(tempsayi!=0)
	{
		tempsayi=tempsayi/10;
		basamaksayisi++;
	}
	
	if(basamaksayisi<=5)
	{
		for(i=0;i<size;i++)
		{
			dizi[i]=sayi%10;
			sayi=sayi/10;
			
		}
	}
	
	for(i=0;i<size;i++)
	{
		printf("%d\n" ,dizi[i]);
	}
	
	return 0;
}
