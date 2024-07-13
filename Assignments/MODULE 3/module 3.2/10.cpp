// C program you have to make a summation of first and last Digit.
// (E.g., 1234 Ans: 5) 

#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter any number:");
	scanf("%d",&a);
	
	b=a%10;   //last digit
	while(a>0)
	{
		c=a%10; //first digit
		a=a/10;
		
	}
	printf("sum of first and last digit is :%d",b+c); //sum if last and first digit 
}
