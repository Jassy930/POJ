void main()
{
	float x[100],y[100],dis[100],r,out[100];
	int num,i,j;
	
	j=0;
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		scanf("%f %f",&x[i],&y[i]);
		dis[i]=sqrt(x[i]*x[i]+y[i]*y[i]);
		out[i]=(3.14*dis[i]*dis[i]*0.5/50);
		if(out[i]-(int)out[i] == 0) out[i]++;
	}
	for(i=0;i<num;i++)
	{
		printf("Property %d: This property will begin eroding in year %d.\n",i+1,(int)(out[i]+1));
	}
	printf("END OF OUTPUT.\n");
}