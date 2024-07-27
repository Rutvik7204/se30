/* Write a program to find the multiplication values and the cubic values using 
inline function */ 

#include<iostream>
using namespace std;

class A{
	public:
		
		
		inline  multiplication(float a,float b)   //inline function for multiplication...
		{
			return a*b;
		}
		inline  cubic(float a)			//inline function for cubic...
		{
			return a*a*a;
		}
};


main()
{
	float a,b;				//deta mamber..
	cout<<"Enter A : ";				//accept one number from user....
	cin>>a;
	
	cout<<"Enter B : ";				//accept second number from user....
	cin>>b;
	
	//crate objcet
	A obj;
	cout<<endl<<"Multiplication of A and B ="<<obj.multiplication(a,b)<<endl;		//call function...	
	cout<<endl<<"cubic of A = "<<obj.cubic(a)<<endl;
	cout<<endl<<"cubic of B = "<<obj.cubic(b)<<endl;

}

