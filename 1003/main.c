#include <stdio.h>

void main()
{
	double length;
	float len[100];
	int num,j,out[100],ci;

	num=0;j=0;length=0.0;

	do{
		scanf("%f",&len[num]);
		num++;
	}
	while(len[num-1]);
	num--;

	for(j=0;j<num;j++)
	{
		ci=2;
		length=0.0;
		while(length<len[j] && ci < 1000)
		{
			length=length+(1.0/ci);
			ci++;
		}
		out[j]=ci-2;
	}
	
	for(j=0;j<num;j++)
	{
		printf("%d card(s)\n",out[j]);
	}

	getchar();
}