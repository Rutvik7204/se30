/* Write a program of to swap the two values using templates */

#include<iostream>

using namespace std;

template<typename S>		//template function.....

S T(S a,S b)			
{
	
	a= a + b ;			//swap number.....
	b= a - b ;
	a= a - b ;
	
	
	cout<<endl<<"AFTER SWAP TWO NUMBER...."<<endl;
	cout<<endl<<" A : "<<a<<endl;			//after swap a or b..........
	cout<<endl<<" B : "<<b<<endl;
}

main()
{
	int a,b;									//deta mamber....
	 
	cout<<"Enter Number A : ";				//user input....
	cin>>a;
	cout<<"Enter Number B : ";
	cin>>b;
	
	T<int>(a,b);			//call function...
}

