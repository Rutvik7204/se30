/*c program  to show  
1. Monday to Sunday using switch case  
2. Vowel or Consonant using switch case */

#include<stdio.h>
main()
{
	int a;   //deta mamber
	
	printf("Enter any number:");
	scanf("%c",&a);						//accept number frome user
	
	
	// Monday to Sunday using switch case
	
	switch(a)
	{
		
		case '1':
			printf("\n\nSunday");
			break;
			
		case '2':
			printf("\n\nmonday");
			break;
			
		case '3':
		     printf("\n\ntuesday");
		     break;
		
		case '4':
			printf("\n\nwednesday");
			break;
			
	    case '5':
	    	printf("\n\nthrusday");
	    	break;
	    	  
	    case '6':
	    	printf("\n\nfriday");
	    	break;
	    	
		  case '7':
	    	printf("\n\nsaterday");
	    	break;
	    	
	    	
	    default:
	    	{
	    		printf("\n\nnumber invelid");
	    		break;
			}
	}
}
