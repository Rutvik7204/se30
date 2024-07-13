//c program to find number is even or odd using ternary operator
#include<stdio.h>
main()
{
	int a;		//deta mamber 
	
	printf("Enter Number:");
	scanf("%d",&a);   //accept number from user 
	
	
(a%2==0)? (printf("%d is even number. \n\n",a)): (printf("%d is odd number.\n\n",a));  //ternary operator
}
