#include<stdio.h>

void main()
{
	float money,out=0;
	int i;
	
	for(i=0;i<12;i++)
	{
		scanf("%f",&money);
		out+=money;
	}
	out=out/12;
	
	printf("$%.2f",out);
}