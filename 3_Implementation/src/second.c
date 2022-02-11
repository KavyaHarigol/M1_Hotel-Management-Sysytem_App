#include "func.h"

int add()
{
	FILE *f;
	char test;
	f=fopen("hotel.txt","a+");
	if(f==0)
	{   f=fopen("hotel.txt","w+");
		getchar();
	}
	while(1)
	{
		printf("\n Enter Customer Details:");
		printf("\n--------------------------");
		printf("\n Enter Room number:\n");
		scanf("\n%s",s.roomnumber);
		fflush(stdin);
		printf("Enter Name:\n");
		scanf("%s",s.name);
		printf("Enter Phone Number:\n");
		scanf("%s",s.phonenumber);
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		printf("\n\nRoom Booked Sucessufully");
		return __FUNC_H;			
	}
	fclose(f);
}

int list()
{
	FILE *f;
	int i;
	if((f=fopen("hotel.txt","r"))==NULL)
	exit(0);
	printf("\n ");
	printf("\tROOM No\t ");
	printf("\tNAME\t ");
	printf("\t\tPHONENUMBER\n");
		for(i=0;i<118;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		printf("\n\t%s \t\t%s  \t\t%s ",s.roomnumber, s.name ,  s.phonenumber);
	}
	printf("\n");
	
	fclose(f);
	getchar();
return __FUNC_H;
}

int delete1()
{
	FILE *f,*t;
	int i=1;
	char roomnumber[20];
	if((t=fopen("temp.txt","w"))==NULL)
	exit(0);
	if((f=fopen("hotel.txt","r"))==NULL)
	exit(0);
	printf("Enter the Room Number\n");
	fflush(stdin);
	scanf("%s",roomnumber);
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{       i=0;
			continue;
		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{       
		printf("\n\n Records Customer not found");
		getchar();
		fclose(f);
		fclose(t);
		main();
	}
	fclose(f);
	fclose(t);
	remove("hotel.txt");
	rename("temp.txt","hotel.txt");
	printf("\n\nRemoved successfully");
	fclose(f);
	fclose(t);
	getchar();
    return __FUNC_H;
}

int search()
{
	FILE *f;
	char roomnumber[20];
	int flag=1;
	f=fopen("hotel.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	printf("Enter Room number of the customer: \n");
	scanf("%s", roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{
			flag=0;
			printf("\n\tRecord Found\n ");
			printf("\nRoom Number:\t%s",s.roomnumber);
			printf("\nName:\t%s",s.name);
			printf("\nPhone number:\t%s",s.phonenumber);
			flag=0;
			break;
		}
	}
	if(flag==1)
	{	
		printf("\n\tCustomer could not be found!");
	}
	fclose(f);
    return __FUNC_H;
}