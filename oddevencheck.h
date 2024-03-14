#include<stdio.h>
#include<stdbool.h>
#include"SquareGenerator.h"
bool oddoreven(int num)
{
	if(num%2==0)
		return false;
	else
		return true;
}
void check(int n)
	{
		if(n < 3)
			printf("\aMagic Sqaure of order less than 3 is not possible\n");
	
		else
		{
			if(oddoreven(n)==true){
				printf("ODD\n");
				square(n);
				logic(n);
			}
			else{
				printf("EVEN\n");
				square(n);}
		}
	}
