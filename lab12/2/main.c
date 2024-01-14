#include <stdio.h>
#include <stdlib.h>

//klavyeden girilen iki kelimeden ikincinin sonuna birinci kelimenin tersini ekleyerek ekrana yazdýran kod

int main(int argc, char *argv[]) 
{
	int i,uzunluk=0;
	char s1[100], s2[100];
	printf("enter first word :");
	gets(s1);
	
	printf("enter second word :");
	gets(s2);
	
	for(i=0;s1[i]!='\0';i++)
	{
		uzunluk++;
	}
	
	printf("%s " ,s2);
	
	for(i=uzunluk-1;i>=0;i--)
	{
		printf("%c" ,s1[i]);
	}
	
	return 0;
}
