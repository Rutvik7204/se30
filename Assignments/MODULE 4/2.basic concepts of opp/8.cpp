/*Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading */



#include<iostream>
using namespace std;

class Mathematic{
	public:
		
		//diffrent parameters function....
		
		fun1(int a,int b)
		{
			cout<<endl<<endl<<"Addition of A+B =  "<< a + b <<endl;  //Addition 
			
		}
		fun1(int a,float b,string n)
		{
			
				cout<<endl<<"Subtraction of A-B =  "<<a-b<<endl;	//Subtraction
		}
		fun1(float a,float b,char m)
		{
			
				cout<<endl<<"Multiplication of A*B =  "<<a*b<<endl;		//Multiplication
		}
		fun1(float  a,string c,float b)
		{
				cout<<endl<<"Division of A/B =  "<<a/b<<endl;	//Division
		}
};

main()
{
	//deta mamber
	float a,b;
	cout<<"Enter Any Number A : ";		//accept number 1 from user...
	cin>>a;
	cout<<"Enter Any Number B : ";		//accept number 2 from user...
	cin>>b;
	
	//crate object of class
	Mathematic obj;
	obj.fun1((int)a,(int)b);			
	obj.fun1((int)a,b,"-");
	obj.fun1(a,b,'/');
	obj.fun1(a,"-",b);


}

