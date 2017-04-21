#include<stdio.h>
#include<math.h>

void main()
{
	int a,b,i,j,max,n,f;

	
	while(scanf("%d%d",&a,&b)!=EOF){
max=0;f=0;

	if(a>b){n=a;a=b;b=n;f=1;}
	
	for(j=a;j<=b;j++)
	{
		i=j;
		n=0;
		while(i!=1)
		{
			if(i%2==1)
				i=i*3+1;
			else i=i/2;
			n++;
		}
		if(max<n)max=n;
	}
	if(f)
	printf("%d %d %d\n",b,a,max+1);
	else
	printf("%d %d %d\n",a,b,max+1);}
}