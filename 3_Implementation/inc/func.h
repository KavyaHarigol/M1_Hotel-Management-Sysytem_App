#ifndef __FUNC_H
#define __FUNC_H
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

 struct CustomerDetails   //STRUCTURE DECLARATION
{
	int roomnumber[10];
	char name[20];
    int phonenumber[15];
}s;

int add();  //room book function
int list(); //list finction
int delete1(); //delet function
int search(); //search function

#endif