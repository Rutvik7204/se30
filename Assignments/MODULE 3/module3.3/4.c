//C program for find factorial using recursion.

#include<stdio.h>

fac(int i)	
{
	if(i>=1)					//recursion
		return i*fac(i-1);	
	else
		return 1;	
}

main()
{
	int n;
	
	printf("Enter any number : ");
	scanf("%d",&n);		//number input
	
	printf("factorial of number  = %d",fac(n));	//print factorial
									
}

