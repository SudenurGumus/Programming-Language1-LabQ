#include <stdio.h>
#include <stdlib.h>

//klavyeden girilen bir string i�erisindeki kelimelerde ka�ar tane a karakteri ge�ti�ini bularak ekrana yazd�ran kod

int main(int argc, char *argv[]) 
{
	char A[50];
	int i,kelime=0,sayac=0;
	
	printf("bir string giriniz :");
	gets(A);
	
	for(i=0;A[i]!='\0';i++)
	{
		if(A[i]=='a')
		   sayac++;
		else if(A[i]==' ')
		{
		   kelime++;
		   printf("%d. kelimede %d adet a harfi var\n" ,kelime,sayac);
		   sayac=0;
		}
	}
	
	kelime++;
	printf("%d. kelimede %d adet a harfi var\n" ,kelime,sayac);
	
	return 0;
}
