#include<iostream>
using namespace std;

class bankaccount{
	private:
		
		 // deta mamber 
		
		string name;
		double acnum;
		string actype;
		double balanceam;
		
	
	public:     
		// all details of account holder.... 
		
		bankaccount(){
			cout << "Account Holder: ";
			cin>>name;
			cout << "Account Number: ";
			cin>>acnum;
			cout << "Account Type: ";
			cin>>actype;
			cout << "Current Balance: $";
			cin>>balanceam;
		}
};
 
 
 			// class of deposit amount.............
class B:public bankaccount
	{
		public:
			
		deposit(double amount)
		{
			if(amount>0)
			{
				balanceam=balanceam+amount;
				cout<<"Amount deposited successfully..... Now Balance: $"<<balanceam<<endl;
				
			}
			else
			{
				cout<<"Enter valid amount..."<<endl;
			}
		}
    };
    
    // class of withdraw amount....................
    
class C:public B
    {
		public :
			
		withdraw(double amount)
		{
		
		if(amount>0)
		{
			if(balanceam>=amount)
			{
				balanceam=balanceam-amount;
				cout<<"Amount Withdraw successfully..... Now Balance: $"<<balanceam<<endl;
			}
			else
			{
				cout<<"Enter valid Withdraw amount..."<<endl;
			}
	     	}	
	
         }
         
    };
    
    // class of dispaly  acholder details...........

class D:public C
{
	public:
		Name(){
			cout<< "Account Holder: "<<name<<endl;
			cout<< "Account Number: "<<acnum<<endl;
			cout<< "Account Type: "  <<actype<<endl;
			cout<<"Current Balance: $"<<balanceam<<endl;
		}
};


main()
{
	D obj;
	obj.deposit(0);	  //enter deposit amount
	obj.withdraw(2000); //enter withdraw amount
	obj.Name();
}

