/*C program to take two Array input from user and sort them in  ascending or descending order as per user's choice */
#include<stdio.h>
main()
{
	int a[10],b[10],ch1,ch2,r,n,i,j,temp;
	
	printf("HOW MANY NUMBER YOU ADD IN NO.1 ARRAY (1-10): ");
	scanf("%d",&r);
	
	printf("\nHOW MANY NUMBER YOU ADD IN NO.2 ARRAY (1-10): ");
	scanf("%d",&n);
	
	for(i=0;i<r;i++)
	{
		printf("\n\nNo.1:");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n\nNo.2:");
		scanf("%d",&b[i]);
	}
	
	printf("------------------------------------------------------------------>");
	printf("\n\nEnter Number 1 for Ascending order");
	printf("\nEnter Number 2 for descending order");
	printf("\n------------------------------------------------------------------>");
	
	
	printf("\n\nEnter Your Choice For 1 Array:");
	scanf("%d",&ch1);
	printf("\n\nEnter Your Choice For 2 Array:");
	scanf("%d",&ch2);
	
		if(ch1==1) 
	{
		printf("\n ASCENDING ORDER OF 1 ARRAY  : ");
		for(i=0;i<r;i++)
		{
			for(j=i+1;j<r;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
			printf(" %d ",a[i]);
		}
	}
	
	else if(ch1==2)
		{
		printf("\n DESCENDING ORDER FOR 1 ARRAY : ");
		for(i=0;i<r;i++)
		{
			for(j=i+1;j<r;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
			printf(" %d ",a[i]);
		}
	}

	else
	{
		printf("\n  INVELID CHOICE FOR 1ST ARRAY.");
	}
		if(ch2==1)
	{
		printf("\n ASCENDING ORDER OF 2 ARRAY  : ");
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(b[i]>b[j])
				{
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
			printf(" %d ",b[i]);
		}
	}
	
	else if(ch2==2) 
	{
		printf("\n DESCENDING ORDER FOR 2 ARRAY : ");
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(b[i]<b[j])
				{
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
			printf(" %d ",b[i]);
		}
	}
	
	else
	{
		printf("\n  INVELID CHOICE FOR 2ND ARRAY.");
	}
	


}
