#include<stdio.h>
#include<stdlib.h>
#include"oddlogic.h"
#include"oddevencheck.h"

int main()
	{
		int n;
		printf("Enter the order of magic square: ");
		scanf("%d", &n);
		check(n);
		return(0);
}

