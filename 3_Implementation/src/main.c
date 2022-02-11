#include "func.h"
void login()
{
	int a=0,i=0;
    char name[20]; 
    char word[20];
    char user[20]="hotel";
    char pass[20]="hotel";

	
    do
{	
    printf("\n------------LOGIN--------------");
    printf(" \n\n Enter Username:-");
	scanf("%s", &name); 
	printf(" \n Enter Password:-");
	scanf("%s", &word); 
	if(strcmp(name,user)==0 && strcmp(word,pass)==0)
	{
	printf("\nLogin Sucessful");
	break;
	}
	else
	{
		printf("\nSORRY! Login Failed, Try Again");
		a++;
		getchar();
		
	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you entered 4 times wrong user or password");		
		getchar();
		
		}	
}

int main(){     // MAIN FUNCTION	
	int i=0;	
	char customername;
	char choice;
    login();
	while (1)      // INFINITE LOOP
	{
		printf("\n");
		printf(" -------------------------------  MAIN MENU  ------------------------------- \n");
		printf("\n");
		printf("\t\t *Please enter your choice for menu*:");
		printf("\n\n");
		printf(" \n Enter 1 -> Book a room");
		printf(" \n Enter 2 -> View Customer Record");
		printf(" \n Enter 3 -> Delete Customer Record");
		printf(" \n Enter 4 -> Search Customer Record");
		printf(" \n Enter 5 -> Exit");
		printf("\n---------------------------------------------------------------------------------------------");
		printf("\n");
		choice=getchar();
		choice=toupper(choice);
		switch(choice)           // SWITCH STATEMENT
		{	
			case '1':
				add();break;
			case '2':
				list();break;
			case '3':
				delete1();break;
			case '4':
				search();break;
			case '5':
				printf("\n\n\tTHANK YOU. Visit Again\n\n");
				exit(0);
				break;
			default:
				break;
		}
	}
}



