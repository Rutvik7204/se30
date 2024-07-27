/*Write a program of Addition, Subtraction, Division, Multiplication using 
constructor.*/
  
#include<iostream>
using namespace std;

class c{
	public:
		//giving same name to function of class...
		c(double a,double b){
		int add=a+b;
		cout<<"Sum a + b =: "<<add<<endl;		//Sum...
		int sub=a-b;
		cout<<"subtract a - b = : "<<sub<<endl;		//subtract...
		int mal=a*b;
		cout<<"multiply a * b =: "<<mal<<endl;		//multiply...
		float div=a/b;
		cout<<"divide a / b = : "<<div<<endl;	    //divide...
		}
	
};


main()
{
	double a,b;			//deta mamber...
	cout<<"Enter number A : ";    //accept from user...
	cin>>a;
	cout<<"Enter number B : ";		//accept from user...
	cin>>b;
	
	c obj(a,b);		//crate obj...
	

}

