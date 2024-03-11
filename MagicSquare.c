#include<stdio.h>
#include"SquareGenerator.h"
int main()
	{
		int n;
		printf("Enter the order of magic square: ");
		scanf("%d", &n);
		if(n<3)
			printf("\aMagic Square of order less than 3 is not possible\n");
		else
		{
			printf("MAGIC SQUARE OF %dx%d:\n",n,n);
			square(n);
		}
	return(0);
}

