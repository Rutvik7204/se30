#include<iostream>
using namespace std;

// class ...
class A{
	public:
		int a,b;		//deta mamber...
		add()
		{
			cout<<"Enter A:";		//accept first number from user...
			cin>>a;
			cout<<"Enter B:";		//accept second number from user...
			cin>>b;
			cout<<"Addition of A+B:"<<a+b<<endl;	//	Addition...
			cout<<"subtraction of A-B:"<<a-b<<endl;				//subtraction...
			cout<<"Multiplication of A*B:"<<a*b<<endl;		//	Multiplication...
			cout<<"Division of A/B:"<<a/b<<endl;			// Division...
		}
};

main()
{
	A obj;
	obj.add();
	
}

