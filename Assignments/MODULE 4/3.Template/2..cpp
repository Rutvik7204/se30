/* Write a program of to sort the array using templates. */

#include<iostream>

using namespace std;

template<typename sort>		//template function....
sort B(sort a[])
{
	int i,j,temp;		//deta mamber
	
	for(i=0;i<5;i++)		//asceding order fort sort array..........
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		cout<<a[i]<<endl<<"Sort :  ";
	}
}

main()
{
	char a[5];		//deta mamber......
	int i;
	cout<<"Enter Any 5 Character.."<<endl;			
	
	for(i=0;i<5;i++)
	{
		cout<< " "<<i+1<<" : " ;		//user input.....
		cin>>a[i];
		
	}
	B<char>(a);		//call function....
}

