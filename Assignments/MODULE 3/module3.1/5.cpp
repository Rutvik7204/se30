// c program for  check if the given year is a leap year or not.  

#include<stdio.h>
main()
{
	int a;   //deta mamber
	
	printf("Enter year :");
	scanf("%d",&a);
	
	if(a%4==0  )
	{
		printf("\nThis is leap year");
	}
	else if(a%100==0)
	{
		printf("\nThis is leap year");
	}
	else if(a%400==0)
	{
		printf("\nThis is leap year");
	}

	else
	{
		printf("\nThis is not leap year");
	}
}
