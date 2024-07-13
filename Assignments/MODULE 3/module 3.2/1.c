//c program to swap two numbers without using third variable 

#include<stdio.h>  
 int main()    
{    
int a, b; //deta mamber

printf("\nEnter A:");
scanf("%d",&a) ;  //accept number A
printf("\nEnter B:");
scanf("%d",&b) ;	//accept number B

a=a+b;  
b=a-b;
a=a-b;


printf("\nAfter Swepping A:%d",a);

printf("\n\nAfter Swepping B:%d",b);



}   


