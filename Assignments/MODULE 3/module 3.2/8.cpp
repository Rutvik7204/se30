//c  program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
main()
{
	int a,b,sum=0;  //deta mamber
	
	printf("Enter number :");  //accept from user
	scanf("%d",&a);
	
	while(a>0)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
	}
	printf("sum of all digit is :%d",sum); // print sum number
}
