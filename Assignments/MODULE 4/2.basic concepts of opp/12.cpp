/* Write a program to swap the two numbers using friend function without 
using third variable   */

#include<iostream>
using namespace std;

class A{
	public:
		int a,b;			//deta mamber....
		
		details()
		{
		cout<<"Enter A : ";			//accept from user...
		cin>>a;
		cout<<"Enter B : ";
		cin>>b;	
	    }
		
		friend swep(A& s);			//	friend function....
		
		//display A and B after swep.....
		
		display()
        {
		cout<<endl<<"AFTER SWAP TWO NUMBER...."<<endl;
		cout<<endl<<"A : "<<a;
		cout<<endl<<"B : "<<b<<endl;
	    }
	
};

	//friend function......
		
swep(A& s){
	s.a=s.a+s.b;
	s.b=s.a-s.b;
	s.a=s.a-s.b;
	}


main()
{
	
	A obj;
	obj.details();
	swep(obj);		//call friend function....
	obj.display();
	
		

}

