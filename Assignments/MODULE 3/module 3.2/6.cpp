//c program  to print Fibonacci series up to given numbers 
#include<stdio.h>
main()
{
	int t1=0,t2=1,nexttum,n,i;  //deta mamber 
	
	printf("Enter number:");   //accept from user 
	scanf("%d",&n);
	
	printf("Fibonacci is :%d,%d,",t1, t2);  //print 0 and 1
	
	//loop for print more number 
	
	for(i=3;i<=n;i++)
	{
	
	nexttum=t1+t2;
	printf("%d, ",nexttum);
	t1=t2;
	t2=nexttum;
}
}
