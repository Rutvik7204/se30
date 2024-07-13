//wep to tabel...
#include<stdio.h>
main()
{
	int n,i; //deta mamber 
	
	printf(" enter number:");
	scanf("%d",&n);     //accept from user
	
	for(i=1;i<=10;i++)
	{
		printf("\n %d*%d=%d",n,i,n*i);  //print table
	}
}
