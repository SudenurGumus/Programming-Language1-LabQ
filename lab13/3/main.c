#include <stdio.h>
#include <stdlib.h>

//bir sayının çift mi tek mi olduğunu kontrol eden fonksiyon

int main(int argc, char *argv[]) 
{
	int num;
	
	printf("sayi giriniz :");
	scanf("%d" ,&num);
	
	function(num);
	
	return 0;
}

int function(int num)
{
	int oddnum,evennum;
	
	if(num%2==0)
	printf("number is even");
	
	
	else
	printf("number is odd");
	
	
	return num;
}
