//c program to find simple interest 

#include<stdio.h>
main()
{
	int a,b,c;  //deta mamber
	
	printf("Enter  time duration (in years) :");
	scanf("%d",&a);				//user input time
	
	printf("\nEnter interest rate (in percentage) :");
	scanf("%d",&b);			//user input interest
	
	printf("\nEnter principal amount  :");
	scanf("%d",&c);			//user input principal amount
	
	printf("\n\nYour intrest is:%f",(float)a*b*c/100);
	//print intrest 
	
}
