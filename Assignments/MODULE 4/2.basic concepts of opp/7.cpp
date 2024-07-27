/*assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance)*/  


#include<iostream>
using namespace std;

class a{
	public :
		int rollnumber;				//deta mamber..
		roll(int roll)				//parameterized function..
		{
			rollnumber=roll;
	    }
};
class test:public a{
	public:
		float submark1,submark2;           //deta mamber...
		mark(float mark1,float mark2)
		{
			submark1=mark1;
			submark2=mark2;
	    }
};
class result:public test{
	public:
		
											//display all Information about student...					
		display(){
		cout<<endl<<"All Information of Students "<<endl;
		cout << "Roll Number: " << rollnumber<< endl;
        cout << "Subject 1 Marks: " << submark1 << endl;
        cout << "Subject 2 Marks: " << submark2 << endl;
        cout << "Total Marks: " << submark1+submark2 << endl;
			
		}
			
		
};

main()
{		
		result obj;
		int roll;
		cout<<"Enter Your Roll Number : ";		//accept rollnumber..
		cin>>roll;
		obj.roll(roll);
		
		float mark1,mark2;
		cout<<"Enter marks of Subject 1: ";		//accept mark1 and mark 2 from user..
		cin>>mark1;
		cout<<"Enter marks of Subject 2: ";
		cin>>mark2;
		obj.mark(mark1,mark2);
		
		
		
		
		obj.display();						//call display function..
	
		
}

