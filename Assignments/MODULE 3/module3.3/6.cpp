//c program for to take two Array input from user and sort them in ascending or 
//descending order as per user’s choice 

#include <stdio.h>
int main() {
  int  a[2][2], b[2][2], i, j,z=0;
 

  printf("\nEnter elements of 1st matrix:\n");
  for (i=0; i < 2; i++)			//first array loop....
    for (j=0; j < 2; j++)
	{
      printf("Enter element a: ");
      scanf("%d", &a[i][j]);
    }
    
    
    

  printf("Enter elements of 2nd matrix:\n");
  
  for (i=0; i < 2; i++)  //second array loop...
    for (j=0; j < 2; j++) 
	{
      printf("Enter element b: ");
      scanf("%d", &b[i][j]);
    }
    
    
    printf("\n\n1st matrix\n\n");

     for (i=0; i < 2; i++)	//print first array in 2D matrix....
    for (j=0; j < 2; j++)
    {
    printf("%d   ",a[i][j]);
	  if (j == 2 - 1)   	//for matrix print...
	  {
        printf("\n\n");
    }  
	}
	printf("\n\n2st matrix\n\n");

     for (i=0; i < 2; i++)		//print second array....
    for (j=0; j < 2; j++)
    {
    printf("%d  ",b[i][j]);	
	 if (j == 2 - 1) {
        printf("\n\n");
    }  
	}
	
	
	printf("\n\nAddition : \n");
	for(i=0;i<2;i++)		
	{											//addition of a and b array... 
		for(j=0;j<2;j++)
		{
			printf("%d  ",a[i][j]);
		}
		
		if(z==0)
			printf("  +  ");
		else
			printf("     ");
		
		for(j=0;j<2;j++)
		{
			printf("%d  ",b[i][j]);
		}
		
		if(z==0)
			printf("  =  ");
		else
			printf("     ");
		for(j=0;j<2;j++)
		{
			printf("%d  ",a[i][j]+b[i][j]);
		}
		printf("\n\n");
		z++;
	}
	printf("\n\nSubtraction : \n");			//subtracition of a and b array...
	for(i=0;i<2;i++)		
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",a[i][j]);
		}
		
		if(z==2 )
			printf("  -  ");
		else
			printf("     ");
		
		for(j=0;j<2;j++)
		{
			printf("%d  ",b[i][j]);
		}
		
		if(z==2)
			printf("  =  ");
		else
			printf("     ");
		for(j=0;j<2;j++)
		{
			printf("%d  ",a[i][j]-b[i][j]);
		}
		printf("\n\n");
		z++;
	}
		printf("\n\nMultiplication : \n");			//Multiplication of a and b array...
	for(i=0;i<2;i++)		
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",a[i][j]);
		}
		
		if(z==4 )
			printf("  *  ");
		else
			printf("     ");
		
		for(j=0;j<2;j++)
		{
			printf("%d  ",b[i][j]);
		}
		
		if(z==4)
			printf("  =  ");
		else
			printf("     ");
		for(j=0;j<2;j++)
		{
			printf("%d  ",a[i][j]*b[i][j]);
		}
		printf("\n\n");
		z++;
	}
	
  
  

  
 

  return 0;}

