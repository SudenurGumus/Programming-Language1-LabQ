#include <stdio.h>
#include <stdlib.h>

//first string,second string then bring them together

int main(int argc, char *argv[]) 
{
	char s1[6]="Ahmet";
	char s2[4]="Ali";
	
	strcat(s1,s2);
	printf("%s" ,s1);
	
	return 0;
}
