/*  Write a program to concatenate the two strings using Operator Overloading  */

#include<iostream>
using namespace std;

class A{
	public:
		string c;		//deta type...
		
		user()			//user input store in c string....
		{
			cin>>c;
		}
		
		A operator+(A & T)			//operator overloading...
		{
			A temp;
			temp.c= c+T.c;			//do string concatenate.... 
			return temp;
		}
		display()
		{
			cout<<" "<<c<<endl;		//display concatenate string....
		}
};



main()
{
	A obj,obj1,con;
	cout<<"Enetr 1 string :";		
	obj.user();		//user input
	cout<<"Enetr 2 string :";
	obj1.user();	//user input
	con=obj+obj1;
	cout<<endl<<"concatenate of string 1 and string 2 :";
	con.display();	//call display function...
	
}

