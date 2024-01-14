#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char amk[100],i,k=0,l=0;
	char yeto[100];
	printf("gir AMK :");
	gets(amk);
	
	while(amk[k]!='\0')
	{
		k++;
	}
	
	for(i=0;i<k;i++)
	{
		if(amk[i]>='a'&&amk[i]<='z'){
			yeto[l]=amk[i];
			l++;
		}
		
	}
	
	for(i=0;i<l;i++)
	{
		printf("%c" ,yeto[i]);
	}
	
	return 0;
}
