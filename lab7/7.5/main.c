#include <stdio.h>
#include <stdlib.h>

//klavyeden girilen para miktarýný en az banknot kullanarak oluþturmak istediðimizde içinde kaç tane 100,50,20 ve 10luk banknot olduðunu bulan kod (para miktarý 10un katý olmalý)

int main(int argc, char *argv[]) 
{
	int money,a,b,c,d;
	
	printf("enter money amount :");
	scanf("%d" ,&money);
	
	if(money%10==0)
	{
		a=money/100;
		money=money%100;
		
		b=money/50;
		money=money%50;
		
		c=money/20;
		money=money%20;
		
		d=money/10;
		money=money%10;
		
		printf("%d tane 100 tl\n" ,a);
	    printf("%d tane 50 tl\n" ,b);
	    printf("%d tane 20 tl}\n" ,c);
	    printf("%d tane 10 tl" ,d);
	}
	return 0;
}
