void square(int x)
{
	int i,j,a=1;
	printf("The square of %dx%d order is \n",x,x);
	for(i=1;i<=x;i++)
	{
		printf(" |\t");
		for(j=1;j<=x;j++)
		{
			printf("%2d\t",a);
			a++;
		}
		printf(" |\n");
	}

		
}
