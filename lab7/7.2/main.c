#include <stdio.h>
#include <stdlib.h>

//klavyeden girilen A ve B de�i�kenlerini kendi aras�nda yer de�i�tiren kod

int main(int argc, char *argv[]) 
{
	int A,B,C;
	
	printf("A sayisini giriniz :");
	scanf("%d" ,&A);
	
	printf("B sayisini giriniz :");
	scanf("%d" ,&B);
	
	C=A;
	A=B;
	B=C;
	
	printf("yeni A sayisi :%d\n" ,A);
	printf("yeni B sayisi :%d" ,B);
	
	return 0;
}
