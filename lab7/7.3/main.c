#include <stdio.h>
#include <stdlib.h>

//��renci i�in no, vize notu ve final notu girilince ge�me notunu (%40 vize, %60 final) hesaplay�p ��renci numaras� ile ekrana yazd�ran kod

int main(int argc, char *argv[]) 
{
	int studentnum,midterm,final,pass;
	
	printf("enter student number :");
	scanf("%d" ,&studentnum);
    
	printf("enter midterm note :");
    scanf("%d" ,&midterm);
    
	printf("enter final note :");
    scanf("%d" ,&final);
    
    pass=(midterm*0.4+final*0.6);
    
    printf("student who has %d student number pass with :%d" ,studentnum,pass);
	
	return 0;
}
