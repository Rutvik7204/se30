//c program to convert days into years 

#include<stdio.h>
main()
{
	int a;    //deta mamber
	
	printf("Enter days:");
	scanf("%d",&a);      //input days
	
	printf("\n years are:%.3f",(float)a/365);//convert days into years
}
