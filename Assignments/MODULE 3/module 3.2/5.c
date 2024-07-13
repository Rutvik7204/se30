//c program to print factorial of given number

#include<stdio.h>
main()
{
	int a,i,fac=1;//deta mamber
	
	printf("Enter number:");
	scanf("%d",&a);			//accept form user
	
	for(i=1;i<=a;i++)
	
		fac=fac*i;
	
	 
	 printf("\n Fectorial:%d",fac); //print factorial
}
