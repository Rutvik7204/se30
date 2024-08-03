#include<iostream>

using namespace std;


int main()
{
	
	//deta mamber.....

	char yn;
	int choice;
	int ch1,q,ch2,ch3,ch4,ch5;
	
	   
		cout<<"------------------------  Day-Night Fast food  ------------------------"<<endl<<endl; 
			string A;
			cout<<"Plese Enter Your Name: ";		//user input...
			cin>>A;
			cout<<"Hello "<<A;		//print user name....
		
		
		cout<<endl<<endl<<"What would you like to order ?"<<endl<<endl;
		
		
				//menu of day night Fast food......
				   
			cout<<endl<<"              ---------------------- Menu ----------------------"<<endl;
			cout<<"1) Pizzas"<<endl;
			cout<<"2) Burgers"<<endl;
			cout<<"3) Sandwich"<<endl;
			cout<<"4) Rolls"<<endl;
			cout<<"5) Biryani"<<endl;
			
					//user input her choice........
	  		cout<<endl<<"Plese Enter Your Choice: ";
			cin>>choice;
	

	
				//pizza section.................
				
		if(choice == 1)
		{
			cout<<endl<<"1  Margarita Pizza Regular Size Rs.150 "<<endl;
			cout<<"2  Creamy Max Pizza Regular Size Rs.500  "<<endl;
			cout<<"3  Peri Peri Pizza Regular Size Rs.350  "<<endl<<endl;	
			
				//enter pizza would you like........
			cout<<"Please Enter which Pizza you would like to have?: ";
			cin>>ch1;
				//enter pizza Quantity....
			cout<<endl<<"Please Enter Quantity: ";
            cin>>q;
            
            system("CLS");
            
            //print billl............
            
		if(ch1==1)
		{
             cout<<endl<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" Margarita Pizza"<<endl;
             cout<<"Your Total Bill is  "<<q*150<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
			
		}
		if(ch1==2)
		{
             cout<<"           --------Your Order---------           "<<endl;
             cout<<" "<<q<<" Creamy Max Pizza"<<endl;
             cout<<"Your Total Bill is  "<<q*500<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
			
		}
		if(ch1==3)
		{
             cout<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" Peri Peri Pizza"<<endl;
             cout<<"Your Total Bill is  "<<q*350<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
		
		}
			
			
		}
		
		
			//burger section............
		if(choice == 2)
		{
			cout<<endl<<"1  Veg. Burger Rs.70 "<<endl;
			cout<<"2  CrunChy Veg Burger Rs.100  "<<endl;
			cout<<"3  Day-Night special Burger Rs.120  "<<endl<<endl;	
			
			//enter a number what would you  like.....
			cout<<"Please Enter which Burger you would like to have?: ";
			cin>>ch2;
			//enter Quantity...
			cout<<endl<<"Please Enter Quantity: ";
            cin>>q;
            
            system("CLS");
            
            //billing section....
            
            
		if(ch2==1)
			{
             cout<<endl<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" Veg. Burger"<<endl;
             cout<<"Your Total Bill is  "<<q*70<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
			}
		if(ch2==2)
			{
             cout<<"           --------Your Order---------           "<<endl;
             cout<<" "<<q<<" CrunChy Veg Burger"<<endl;
             cout<<"Your Total Bill is  "<<q*100<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
			}
		if(ch2==3)
			{
             cout<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" Day-Night special Burger"<<endl;
             cout<<"Your Total Bill is  "<<q*120<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;	
			}

		}
		
		//sandwich section.............
	if(choice == 3)
		{
			cout<<endl<<"1  Club Sandwich Rs.200 "<<endl;
			cout<<"2  Veg. Crispy Sandwich Size Rs.160  "<<endl;
			cout<<"3  Extream Veg. Sandwich Size Rs.100  "<<endl<<endl;	
			
			//enter which sendwich would you like..............
			cout<<"Please Enter which Pizza you would like to have?: ";
			cin>>ch3;
			//enter Quantity................
			cout<<endl<<"Please Enter Quantity: ";
            cin>>q;
            //billing section............
            system("CLS");
			if(ch3==1)
			{
             cout<<endl<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" Club Sandwich"<<endl;
             cout<<"Your Total Bill is  "<<q*200<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
			}
			if(ch3==2)
			{
             cout<<"           --------Your Order---------           "<<endl;
             cout<<" "<<q<<" Veg. Crispy Sandwich"<<endl;
             cout<<"Your Total Bill is  "<<q*160<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
         	}
			if(ch3==3)
			{
             cout<<"           --------Your Order---------           "<<endl;
             cout<<""<<" Extream Veg. Sandwich"<<endl;
             cout<<"Your Total Bill is  "<<q*100<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
			
			}

		}
		
		//roll section................
		if(choice == 4)
		{
			cout<<endl<<"1  Manchurian Roll Rs.100 "<<endl;
			cout<<"2  Paneer Tikka Roll Rs.150  "<<endl;
			cout<<"3  Kathi Roll Rs.120  "<<endl<<endl;	
			
			//wich roll you like.............
			cout<<"Please Enter which Pizza you would like to have?: ";
			cin>>ch4;
			//enter Quantity...............
			cout<<endl<<"Please Enter Quantity: ";
            cin>>q;
            //biling section..............
            system("CLS");
			if(ch4==1)
			{
             cout<<endl<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" Manchurian Roll"<<endl;
             cout<<"Your Total Bill is  "<<q*100<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
			}
			if(ch4==2)
			{
             cout<<"           --------Your Order---------           "<<endl;
             cout<<" "<<q<<" Paneer Tikka Roll"<<endl;
             cout<<"Your Total Bill is  "<<q*150<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
			}
			if(ch4==3)
			{
             cout<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" Kathi Roll"<<endl;
             cout<<"Your Total Bill is  "<<q*120<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
			
			}

		}
		
		//biryani section............
			if(choice == 5)
		{
			cout<<endl<<"1  Hyderabadi Biryani Rs.350 "<<endl;
			cout<<"2  Kashmiri Biryani Rs.300  "<<endl;
			cout<<"3  Veg. Biryani Rs.100  "<<endl<<endl;	
			
			//enter number wich would you like...............
			cout<<"Please Enter which Biryani you would like to have?: ";
			cin>>ch5;
			//enter your Quantity.................
			cout<<endl<<"Please Enter Quantity: ";
            cin>>q;
            //biling section.........
            system("CLS");
			if(ch5=1)
			{
				
             cout<<endl<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" "<<bir1<<endl;
             cout<<"Your Total Bill is  "<<q*350<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
			}
			if(ch5==2)
			{
             cout<<"           --------Your Order---------           "<<endl;
             cout<<" "<<q<<" "<<bir2<<endl;
             cout<<"Your Total Bill is  "<<q*300<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
			}
			if(ch5==3)
			{
             cout<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" "<<bir3<<endl;
             cout<<"Your Total Bill is  "<<q*100<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
			 	
			
			}

		}
}
