//c program to make Simple calculator
#include<stdio.h>
main()
{
	int a,b;  //deta mamber 
	
	printf("Enter value for A:");
	scanf("%d",&a);             //user input a
	
	printf("\nEnter value for B: ");
	scanf("%d" ,&b);			//user input b
	
	printf("\naddition:%d",a+b);
	printf("\nsubscraction:%d",a-b);
	printf("\nmultiplication:%d",a*b);
	printf("\ndivision:%f",(float)a/b);
	printf("\n modulo:%d",a%b);

}
