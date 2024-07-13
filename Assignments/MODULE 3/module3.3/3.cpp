//C program for find reverse of string using recursion 

#include <stdio.h>

rev(char *str) 
{
    if (*str) 
		{
    	    rev(str + 1);	//recursion
        	printf("%c", *str);
    	}
}
main() 
{
    char i[20]; 
    
    printf("Enter a String : ");
    gets(i);		//input string
    
    printf("Reverse String : ");
    
    
    rev(i);	   //call 
    
}
