#include <stdio.h>

int main()
{
	int p,e,i,d,outdays;
	unsigned char number;
	number = 1;
	while(!(p==-1 && e==-1 && i==-1 && d==-1))
	{
		scanf("%d%d%d%d",&p,&e,&i,&d);
		
		outdays = d + 1;
		while(((outdays - p) % 23) || ((outdays - e) % 28) || ((outdays - i) % 33))
		{
			outdays++;
		}
		if(!(p==-1 && e==-1 && i==-1 && d==-1))
		printf("Case %d: the next triple peak occurs in %d days.\n",number,outdays - d);
		number++;
		
	}
	
	return 0;		
}