void logic(int order)
	{
		int a[order][order];
		//int **a = (int **)malloc(order * sizeof(int *));
		int q,r,i,j;
		for(q=0;q<order;q++)
		{
			for(r=0;r<order;r++)
			{
				a[q][r]=0;
			}
		}
		j=order/2;
		i=0;
		for(q=1; q<=order*order;)
		{
			if(i<0 && j>=order)
			{
				i+=2;
				j--;
						}
			else{
				if(i<0)
					i=order-1;
				if(j==order)
					j=0;
			}
			if(a[i][j]==0){
				a[i][j]=q++;
			}
			else{
				i=order-1;
				j=0;
				a[i][j]=q++;
			}
			i--;
			j++;
		}
		printf("Printing the Magic sqaure of size %d\n",order);
		for(q=0;q<order;q++)
		{
			for(r=0;r<order;r++)
			{
				printf("%d\t",a[q][r]);
			}
			printf("\n");
		}
		//free(a);
}
