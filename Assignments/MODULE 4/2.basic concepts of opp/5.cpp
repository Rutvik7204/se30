/*Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)  */

#include<iostream>
using namespace std;

class a{
	public:
		string name;
	
};
class batsman:public a{
	public:
		//deta mambers
	int totalruns;
	float Averageruns;
	int bestperformance;
	int match;
	
	input()
	{
		cout<<"Enter Number Of Matches Played: ";   // enter matches
		cin>>match;

		cout << "Enter total runs scored: ";		//enter total runs 
		cin >> totalruns;
		
		cout << "Enter best performance : ";		//enter best performance
		cin>>bestperformance;
	}
	Average()
	{
		Averageruns=totalruns/(float)match;			//calculate Averageruns
		
	}

	// dispaly all  Cricketer Details 
	
	dispaly()
	{
		cout << " * * * * Cricketer Details * * * *"<<endl;
		cout << " Cricketer Name : " << name <<endl;
		cout << " Matches Played : " << match <<endl;
		cout << " Total Runs : " << totalruns << endl;
		cout << " Average Runs : " << Averageruns << endl;
		cout << " Best Performance : " << bestperformance <<endl;
	}
	
}; 

main()
{
	string name;
		cout<<"Enter Cricketer Name : ";  //enter name of Cricketer
		getline(cin,name);
		// object for class 
		
		batsman obj;
		obj.input();
		
		obj.Average();
	
		obj.dispaly();
		
		
}

