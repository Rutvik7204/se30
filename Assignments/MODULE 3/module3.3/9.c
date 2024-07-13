//c program of structure for five employee that provides the following information -print and display empno, empname, address and age


#include<stdio.h>

struct employ{
	int empno ,age;
	char a[50],b[50];
};

main()
{	struct employ e1[5];
	int i;
	printf("\nEnter employees details");
	
	for(i=0;i<5;i++)
	{
		printf("\n\nEnter Employees number:");
		scanf("%d",&e1[i].empno);
		getchar();
		printf("\nEnter Employees name:");
		gets(e1[i].a);
		printf("\nEnter Employees Address:");
		gets(e1[i].b);
		printf("\nEnter Employees Age:");
		scanf("%d",&e1[i].age);
	
	}
	printf("\n\nEmployees details :\n ");
	
	for(i=0;i<5;i++)
	{
		printf("\nEmployee %d:\n", i + 1);
		printf("\nEmployee Number:%d",e1[i].empno);
		printf("\nEmplooyee name:%s",e1[i].a);
		printf("\nEmplooyee Address:%s",e1[i].b);
		printf("\nEmplouye Age :%d ",e1[i
		].age);
	}
}
