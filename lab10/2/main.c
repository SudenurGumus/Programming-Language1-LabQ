#include <stdio.h>
#include <stdlib.h>
#define size 10

//klavyeden -1 girilene kadar girilen t�m say�lar� diziye aktaran, her elaman�n karesini ekrana yazan kod (eleman say�s� max 10)

int main(int argc, char *argv[]) 
{
    int dizi[size],i,sayi,kare,elemansayisi=0;
    
    for(i=0;i<size;i++)
    {
    	printf("sayi giriniz :");
    	scanf("%d" ,&sayi);
    	
    	if(sayi==-1)
    	{
    		break;
		}
    	else
    	{
    		dizi[i]=sayi;
    		elemansayisi++;
		}
	}
	
	
    
    for(i=0;i<elemansayisi;i++)
	{
		kare=dizi[i]*dizi[i];
		printf("%d. elemanin karesi :%d\n" ,i+1,kare);
	}
		
	return 0;
}
