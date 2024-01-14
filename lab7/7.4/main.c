#include <stdio.h>
#include <stdlib.h>

//klavyeden dairenin yarýçap bilgisi ve iþlem türü girilmesiyle hesap yapan kod (1 ise dairenin çevresi-2 ise dairenin alaný)
//caltyp=calculation type

int main(int argc, char *argv[]) 
{
    int radius,perimeter,area,caltyp;
	
	printf("enter radius :");
	scanf("%d" ,&radius);
	
	printf("enter calculation type :");
	scanf("%d" ,&caltyp);
	
	if(caltyp==1)
	{
		perimeter=2*3.14*radius;
		printf("perimeter :%d" ,perimeter);
	}
	
	else if(caltyp==2)
	{
		area=3.14*radius*radius;
		printf("area :%d" ,area);
	}
	
	return 0;
}
