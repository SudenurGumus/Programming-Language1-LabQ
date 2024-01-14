#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char amk[100];
	int i,k,l,unlu=0,sayi=0,bosluk=0,unsuz=0;
	printf("gir knk :");
	gets(amk);
	
	while(amk[k]!='\0')
	{
		k++;
	}
	
	for(i=0;i<k;i++)
	{
		if(amk[i]=='a'||amk[i]=='e'||amk[i]=='i'||amk[i]=='o'||amk[i]=='u')
		{
			unlu++;
		}
		else if(amk[i]>=0||amk[i]<=9)
		{
			sayi++;
		}
		
		else if(amk[i]==' ')
		{
			bosluk++;
		}
		
		else
		{
			unsuz++;
		}
		
	}
	
	printf("unlu sayisi :%d\n" ,unlu);
	printf("sayi sayisi :%d\n" ,sayi);
	printf("bosluk sayisi :%d\n" ,bosluk);
	printf("unsuz sayisi :%d" ,unsuz);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
