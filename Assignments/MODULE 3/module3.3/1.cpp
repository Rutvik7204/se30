// c program to find out the max number from given array using function 

#include<stdio.h>
max( int a[5]) //parameterized
{
	int max=0,i;
	
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;  //and return
}


main()
{
	int b[5],j;
	
	
	for(j=0;j<5;j++)
	{
		printf("enter any number ");
		scanf("%d",&b[j]);				//accept numer
	}
	
	printf("max number :%d",max(b));
}
