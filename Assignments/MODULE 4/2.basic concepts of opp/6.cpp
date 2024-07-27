/*Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance) */

#include<iostream>
using namespace std;

class a{
	protected:
	string name;    //deta mambers...........
	int age;
	
	public: 
	
	// accept student and teachers name and age........
	
	deta()
	{
			cout<<"Enter  Name : ";
			cin>>name;
			cout<<"Enter Age : ";
			cin>>age;
	}	
	
	// dispaly student and teachers name and age................
	
	
	display()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Age : "<<age<<endl;
		
		
	}
};
class student :public a{
	public:
		float percentage;
		
		per()
		{
			cout<<"Enter Percentage : ";  //accept student Percentage.....
			cin>>percentage;
		}
		
		display1()
		{
			cout<<"Percentage is %: "<<percentage<<endl;   //display Percentage ........... 
		}
		
};

class teacher:public a{
	public:
		float salary;
		sal(){
			cout<<"Enter Your Salary $ : " ;  // accept salary ....................
			cin>>salary;
		}
		display2()
		{
			cout<<"Salary is $ : "<<salary<<endl;  // dispaly salary...........
		}
};



main()
{
	cout <<endl<< "Enter student's information:" << endl;        //accept all information.......
	student obj;          
	obj.deta();
	obj.per();
	
	cout <<endl<<  "Enter teacher's information:" << endl;
	teacher obj1;
	obj1.deta();
	obj1.sal();
	
	cout <<endl<<  "Student's information:" << endl;		//display all information......... 
	obj.display();
	obj.display1();

    cout <<endl<<  "Teacher's information:" << endl; 
	obj1.display();
	obj1.display2();

}

