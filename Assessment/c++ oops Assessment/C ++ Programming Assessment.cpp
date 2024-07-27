#include<iostream>

using namespace std;


int main()
{
	

	char yn;
	int choice;
	int ch1,q,ch2,ch3,ch4,ch5;
	
	char pizza1[]="Margarita Pizza",pizza2[]="Creamy Max Pizza",pizza3[]="Peri Peri Pizza ";
	char bur1[]="Veg. Burger" ,bur2[]="CrunChy Veg. Burger",bur3[]="Day-Night special Burger";
	char send1[]="Club Sandwich",send2[]="Veg. Crispy Sandwich",send3[]="Extream Veg. Sandwich";
	char roll1[]="Manchurian Roll",roll2[]="Paneer Tikka Roll",roll3[]="Kathi Roll";
	char bir1[]="Hyderabadi Biryani" ,bir2[]="Kashmiri Biryani" ,bir3[]="Veg. Biryani";
	   
		cout<<"------------------------  Day-Night Fast food  ------------------------"<<endl<<endl; 
			string A;
			cout<<"Plese Enter Your Name: ";
			cin>>A;
			cout<<"Hello "<<A;
		
		
		cout<<endl<<endl<<"What would you like to order ?"<<endl<<endl;
		
		
		
			cout<<endl<<"              ---------------------- Menu ----------------------"<<endl;
			cout<<"1) Pizzas"<<endl;
			cout<<"2) Burgers"<<endl;
			cout<<"3) Sandwich"<<endl;
			cout<<"4) Rolls"<<endl;
			cout<<"5) Biryani"<<endl;
			
		
	  		cout<<endl<<"Plese Enter Your Choice: ";
			cin>>choice;
	

	
		
		if(choice == 1)
		{
			cout<<endl<<"1  Margarita Pizza Regular Size Rs.150 "<<endl;
			cout<<"2  Creamy Max Pizza Regular Size Rs.500  "<<endl;
			cout<<"3  Peri Peri Pizza Regular Size Rs.350  "<<endl<<endl;	
			
			
			cout<<"Please Enter which Pizza you would like to have?: ";
			cin>>ch1;
			
			cout<<endl<<"Please Enter Quantity: ";
            cin>>q;
            
            system("CLS");
			switch(ch1)
			{
				 case 1:
             cout<<endl<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" "<<pizza1<<endl;
             cout<<"Your Total Bill is  "<<q*150<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
				break;
				case 2:
             cout<<"           --------Your Order---------           "<<endl;
             cout<<" "<<q<<" "<<pizza2<<endl;
             cout<<"Your Total Bill is  "<<q*500<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
				break;
				case 3:
             cout<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" "<<pizza3<<endl;
             cout<<"Your Total Bill is  "<<q*350<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
			 	break;
			
			}
			
			
		}
		
		
		
		if(choice == 2)
		{
			cout<<endl<<"1  Veg. Burger Rs.70 "<<endl;
			cout<<"2  CrunChy Veg Burger Rs.100  "<<endl;
			cout<<"3  Day-Night special Burger Rs.120  "<<endl<<endl;	
			
			
			cout<<"Please Enter which Burger you would like to have?: ";
			cin>>ch2;
			
			cout<<endl<<"Please Enter Quantity: ";
            cin>>q;
            
            system("CLS");
			switch(ch2)
			{
				 case 1:
             cout<<endl<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" "<<bur1<<endl;
             cout<<"Your Total Bill is  "<<q*70<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
				break;
				case 2:
             cout<<"           --------Your Order---------           "<<endl;
             cout<<" "<<q<<" "<<bur2<<endl;
             cout<<"Your Total Bill is  "<<q*100<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
				break;
				case 3:
             cout<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" "<<bur3<<endl;
             cout<<"Your Total Bill is  "<<q*120<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
			 	break;
			
			}

		}
	if(choice == 3)
		{
			cout<<endl<<"1  Club Sandwich Rs.200 "<<endl;
			cout<<"2  Veg. Crispy Sandwich Size Rs.160  "<<endl;
			cout<<"3  Extream Veg. Sandwich Size Rs.100  "<<endl<<endl;	
			
			
			cout<<"Please Enter which Pizza you would like to have?: ";
			cin>>ch3;
			
			cout<<endl<<"Please Enter Quantity: ";
            cin>>q;
            
            system("CLS");
			switch(ch3)
			{
				 case 1:
             cout<<endl<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" "<<send1<<endl;
             cout<<"Your Total Bill is  "<<q*200<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
				break;
				case 2:
             cout<<"           --------Your Order---------           "<<endl;
             cout<<" "<<q<<" "<<send2<<endl;
             cout<<"Your Total Bill is  "<<q*160<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
				break;
				case 3:
             cout<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" "<<send3<<endl;
             cout<<"Your Total Bill is  "<<q*100<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
			 	break;
			
			}

		}
		if(choice == 4)
		{
			cout<<endl<<"1  Manchurian Roll Rs.100 "<<endl;
			cout<<"2  Paneer Tikka Roll Rs.150  "<<endl;
			cout<<"3  Kathi Roll Rs.120  "<<endl<<endl;	
			
			
			cout<<"Please Enter which Pizza you would like to have?: ";
			cin>>ch4;
			
			cout<<endl<<"Please Enter Quantity: ";
            cin>>q;
            
            system("CLS");
			switch(ch4)
			{
				 case 1:
             cout<<endl<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" "<<roll1<<endl;
             cout<<"Your Total Bill is  "<<q*100<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
				break;
				case 2:
             cout<<"           --------Your Order---------           "<<endl;
             cout<<" "<<q<<" "<<roll2<<endl;
             cout<<"Your Total Bill is  "<<q*150<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
				break;
				case 3:
             cout<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" "<<roll3<<endl;
             cout<<"Your Total Bill is  "<<q*120<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
			 	break;
			
			}

		}
			if(choice == 5)
		{
			cout<<endl<<"1  Hyderabadi Biryani Rs.350 "<<endl;
			cout<<"2  Kashmiri Biryani Rs.300  "<<endl;
			cout<<"3  Veg. Biryani Rs.100  "<<endl<<endl;	
			
			
			cout<<"Please Enter which Pizza you would like to have?: ";
			cin>>ch5;
			
			cout<<endl<<"Please Enter Quantity: ";
            cin>>q;
            
            system("CLS");
			switch(ch5)
			{
				 case 1:
             cout<<endl<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" "<<bir1<<endl;
             cout<<"Your Total Bill is  "<<q*350<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
				break;
				case 2:
             cout<<"           --------Your Order---------           "<<endl;
             cout<<" "<<q<<" "<<bir2<<endl;
             cout<<"Your Total Bill is  "<<q*300<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
				break;
				case 3:
             cout<<"           --------Your Order---------           "<<endl;
             cout<<""<<q<<" "<<bir3<<endl;
             cout<<"Your Total Bill is  "<<q*100<<endl;
             cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
             cout<<"Thank you For Ordering From Day-Night Fast food..........."<<endl<<endl;
			 	break;
			
			}

		}
}
