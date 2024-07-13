//WAP to reverse a string and check that the string is palindrome or not  
#include<stdio.h>
#include<string.h>
main()
{
	char a[10],b[10];//deta type
	int i;
	
	printf("\nEnter string A:");//user input string
	gets(a);
	
    strcpy(b,a);//copy string
	strrev(b);//revers sring
	
	if(strcmp(a,b)== 0)//chack a and b string is palindrome 
	printf("\nstring is palindrome...");
	else
	printf("\nstring is not palindrome...");	
}
