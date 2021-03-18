main()
{
	int i=0,j=0;
	char s[]="welcome to w3resource.com";
	int l=sizeof(s)/sizeof(char);
	int xx[l];
	for(i=0;i<l;i++)
	{
		xx[i]=0;
	}
	
	for(i=0;i<l-1;i++)
	{
		for(j=0;j<l-1;j++)
		{
			if(s[i]==s[j])
			{
				xx[i]++;
			}
		}
	}
	
	int max=0;
	char max1;
	for(i=0;i<l-1;i++)
	{	
	if(xx[i]>max)
	{
			
	max=xx[i];
	max1=s[i];
	}}
	
	printf("%c is %d times ",max1,max);
}
