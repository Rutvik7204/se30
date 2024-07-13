//c program for  Addition, Subtraction, Multiplication and Division using Switch 
//case.(Must Be Menu Driven)

#include<stdio.h>
main()
{
	while (1)  //print menu again and again
	{
	
	int a;
	double b,c;
	printf("\n\n--------------------------------------------->");
	printf("\n\n1.Addition");
	printf("\n\n2.Subtraction");
	printf("\n\n3.Multiplication");
	printf("\n\n4.Division");
	printf("\n\n--------------------------------------------->");
	printf("\n\n Enter number in 1/2/3/4 :");
	scanf("%d",&a);
	
	printf("\nEnter number A:"); //choice number A
	scanf("%lf",&b);

	printf("\nEnter number B:"); //choice number B
	scanf("%lf",&c);
	
	switch(a)
	{
		case 1:
		printf("\n\nAddition of A+b:%.2lf",b+c);
		break;
		
		
		case 2:
		printf("\n\nSubtraction of A-b:%.2lf",b-c);
		break;

		case 3:
		printf("\n\nMultiplication of A*b:%.2lf",b*c);
		break;
		
		case 4:
		printf("\n\nDivision of A/b:%.2lf",b/c);
		break;
		
	printf("\n\n--------------------------------------------->");
		default:
			printf("\n\ninvelid number enter any number bwteen 1to4");
			break;
}
		}	
}
