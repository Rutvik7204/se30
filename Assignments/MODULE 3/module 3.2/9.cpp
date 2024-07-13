//c a program to find out the max from given number (E.g., No: -1562 
//Max number is 6) 
#include<stdio.h>
main()
{
	int a,b,c=0;  //deta mamber
	
	printf("Enter number :");
	scanf("%d",&a);						//accept from user
	
	while(a>0)
	{
		b=a%10;
		if(b>c)
		
		c=b;
		a=a/10;	
    }

	printf("Max number is :%d",c);		//print max number
}
