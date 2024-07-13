#include<stdio.h>
main()
{
	int a,b,c;
	
	for(a=1;a<=11;a++)
	{
		if(a<=6)
		{
			for(b=1;b<=a;b++)
			{
				printf("*");
			}
		}
		
		else
		{
			for(c=11;c>=a;c--)
			{
				printf("*");
				}	
		}
		printf("\n");	
	}
}
