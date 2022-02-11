/**
 * @file func.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
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