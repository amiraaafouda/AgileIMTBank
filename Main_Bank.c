/*******************************************************/
/*       Agile Software Development Project            */
/*       Description:Bank Account                      */
/*       Team members: Amira, Aya, Mohamed Salama      */
/*       Date:9 May 2022                               */
/*       Version: v01                                  */
/*******************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
#include "definitions.h"

int main()
{
	//clear screen
	system("cls");
	
	puts("\n=========================================================================================================");
	puts("===========================================Welcome to IMT BANK===========================================");
	puts("=========================================================================================================\n\n");
	// Main LOOP in the program
	char choice;
	while(1)
	{
		puts("Enter 1 To enter login Page or 0 to Exit");
		scanf("%c",&choice);
		fflush(stdin);
		if(choice == '1')
		{
			login();
		}
		else if(choice == '0')
		{
			puts("Exiting .........\n");
			break;
		}
		else
		{
			puts("Invalid Input Please Retry\n");
		}
		
		
	}
	return 0;
}
void login()
{
	// clear screen
	system("cls");
	
	char id[idLimit];
	char password[passwordLimit];
	
	puts("\n=========================================================================================================");
	puts("===========================================Welcome in Login Page========================================");
	puts("=========================================================================================================\n");
	
	puts("Please Enter your ID :");
	gets(id);
	
	puts("Please Enter your Password :");
	gets(password);
	
	//Checking admin
	if(checkAdmin(id,password))
	{
		Admin();
	}
	//Checking user
	else if(checkUser(id,password))
	{
		User(id);
	}
	// if neither
	else{
	puts("Incorrect username or password \n");
	}
	return;
}
