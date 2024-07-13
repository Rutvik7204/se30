//c program for find string lenth without strlen
#include<stdio.h>
main()
{
	char a[50]; //deta mamber
	int i=0;
	
	printf("\n\nEnter any String:"); //accept string
	gets(a);
	
	while(a[i]!='\0')
	{
		i++;
	}
	printf("Your string lenth:%s",i); //print lenth
	
}
