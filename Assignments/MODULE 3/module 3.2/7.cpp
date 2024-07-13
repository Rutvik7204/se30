//c program  to print number in reverse order e.g.: number = 64728 ---> reverse = 
//82746

#include<stdio.h>
main()
{
	int a,b,c=0;  // deta mamber 
	
	printf("Enter any number:");
	scanf("%d",&a);//256
	
	while(a>0)
	{
		b=a%10;//6
		c=c*10+b;//65
		 a /=10;//652
	}
	printf("number is :%d",c); //print reverse number
}
