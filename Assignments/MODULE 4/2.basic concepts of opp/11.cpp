/*Write a program to calculate the area of circle, rectangle and triangle using 
Function Overloading  */

   
#include<iostream>

using namespace std;

	class a{
		public:
			
			
		fun1(float r)
		{
			cout<<endl<<endl<<" Area of Circle : "<< r*r*3.142857142857143 <<endl;   //formula of Area of Circle...
			
		}
		fun1(float l,float w)
		{
			
				cout<<endl<<" Area of Rectangle : "<< l*w <<endl;	//formula of Area of rectangle...
		}
		fun1(float h, float d ,string n)
		{
			
				cout<<endl<<" Area of Triangle :"<<(0.5*h*d)<<endl;		//formula of Area of triangle...
		}
		
	};
main()
{
		float r;								//deta mamber...
		
		cout<<"Enter Radius of Circle : ";	   //accept from user...
		cin>>r;
		
		float l,w;								//deta mamber...
		cout<<"Enter Lenth And Width of Rectangle : ";   //accept from user...
		cin>>l>>w;
		
		float h,d;								//deta mamber...
		cout<<"Enter Hight And Base of Triangle : ";    //accept from user... 
		cin>>h>>d;
		
		//creat object...
		a obj;
		obj.fun1(r);
		obj.fun1(l,w);
		obj.fun1(h,d,"-");
		
}

