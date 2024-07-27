/* Write a Program of Two 1D Matrix Addition using Operator Overloading */

#include<iostream>
using namespace std;

class mat{
	
	public:
		//deta mamber....
		int a[5];
		int i;
		
		user()
		{
			for(i=0;i<5;i++)
			{
				cout<<i+1<<" : ";			//accept from user....
				cin>>a[i];
			}
		}
		
		mat operator +(mat & T)			//operator overloading...... 
		{
			mat A;
				for(i=0; i<5; i++)
				A.a[i] = a[i] + T.a[i];			//sum of 1st and 2nd matrix.....
			return A;
		}
		display()
		{
				for(i=0; i<5; i++)						//display Sum of 1st and 2nd matrix.....
				cout<<i+1<<" : "<<a[i]<<" "<<endl;
				
			
			
		}
	
};

main()
{
	mat obj,obj1,T;
	cout<<"Enter 5 numbers for 1st Matrix : "<<endl;		//user input...

	obj.user();
	
	cout<<"Enter 5 numbers for 2nd Matrix : "<<endl;		//user input...
	obj1.user();
	
	T=obj+obj1;
	cout<<"Sum of 1st and 2nd Matrix "<<endl;		
	T.display();
	
}

