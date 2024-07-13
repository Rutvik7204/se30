//c program to show
//Vowel or Consonant using switch case 

#include<stdio.h>
main()
{
	int a; 			//deta mamber
	
	printf("Enter any character:");
	scanf("%c",&a);					//accept number from user
	
	
	// Vowel or Consonant using switch case  
	
	switch(a)
	{
		
		case 'a':
			printf("\n\nvowel!!");
			break;
			
		case 'e':
			printf("\n\nvowel!!");
			break;
			
		case 'i':
		     printf("\n\nvowel!!");
		     break;
		
		case 'o':
			printf("\n\nvowel!!");
			break;
			
	    case 'u':
	    	printf("\n\nvowel!!");
	    	break;
	    	
	    default:
	    	{
	    		printf("\n\nconsol");
	    		break;
			}
	}
}
