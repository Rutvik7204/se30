/* Write a program to find the max number from given two numbers using 
friend function */

#include<iostream>

using namespace std;

class A{
	public:
	int a,b;
	A()					//counstructor....
	{
	cout<<"Enter Any Number A : ";			//user input...
	cin>>a;
	cout<<"Enter Any Number B : ";
	cin>>b;	
}
		friend maximum(A& B);      //friend function...
		
			
};

			////friend function...
maximum(A& B){
	 if(B.a> B.b)
	  cout<<"Max Number is : "<<B.a; 
	  else
	  cout<<"Max Number is : "<<B.b ;
	
}



main()
{
	A obj;
	maximum(obj);		//call friend function.....
}

