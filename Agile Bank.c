/*******************************************************/
/*       Agile Software Development Project            */
/*       Description:Bank Account                      */
/*       Team members: Amira, Aya, Mohamed Salama      */
/*       Date:9 May 2022                               */
/*       Version: v01                                  */
/*******************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>  
#include <time.h>
 


typedef struct Account
{
    char name[100];
    char Address[100];
    long long int NationalID;
    int Age;
    long long int Guardian_NationalID;
    unsigned long long int BankAccountID;
    char Account_Status[10];
    long long int Balance;
    unsigned long long int Password;

    
}BankAccount;


/**************************************************/
/***************Functions Prototypes***************/
/**************************************************/


void CreateBankAccount();
void Insert_Name( BankAccount* client_Account);
void InsertAddress(BankAccount* client_Account);
void  InsertNationalID(long long int* NationalID);
void InsertAge(BankAccount* client_Account);
void CreateBankAccountID(BankAccount* client_Account);
void AccountStatus(BankAccount* client_Account,int closed);
void AccountBalance(BankAccount* client_Account);
void CreatePassword(BankAccount* client_Account);



int main()
{
    printf("==============================================================================================\n");
    printf("==============================Add New Bank Account ===========================================\n");
    CreateBankAccount();

    return 0;

}

void CreateBankAccount()
{
    BankAccount NewAccount;

    /*** 1. Full name****/
    Insert_Name(&NewAccount );

    // printf("Your Name: ");
    // puts(NewAccount.name ); 
    
    /*** 2. Full Address****/
    InsertAddress(&NewAccount);

    /*** 3. Insert National ID ***/
    InsertNationalID(&NewAccount.NationalID);

    /*** 4. Insert Age ***/
    InsertAge(&NewAccount);


   

    /*** 5. Insert Bank Account ID ***/
    CreateBankAccountID(&NewAccount);
    printf("\nBank account ID: %lld ", NewAccount.BankAccountID);

    /*** 6. Insert Account Status ***/
    AccountStatus(&NewAccount,0);
    // printf("\nAccount Status is %s", NewAccount.Account_Status);

    /*** 7. Insert Account Balance ***/
    AccountBalance(&NewAccount);
    // printf("\nBalance in the Account: %lld", NewAccount.Balance);

    /*** 8. Create Random Password ***/
    CreatePassword(&NewAccount);
    printf("\nPassword: %lld ", NewAccount.Password);



}

void Insert_Name( BankAccount* client_Account){

    
    int count = 0;  


    /*** check number of letters ***/
    while(count< 3)
    {
        

        count = 0;
        printf("Enter at least your first four names: ");  
        
        // read name
        fgets(client_Account->name , sizeof(client_Account->name), stdin);




        for(int i = 0; i < strlen(client_Account->name); i++) {  
            if(client_Account->name[i] == ' ')  
            {
            count++; 
            }
              
        }  

    }

    // Add name to the list


}

void InsertAddress(BankAccount* client_Account)
{
    
    printf("Enter Your Full Address: ");
    fgets(client_Account->Address, sizeof(client_Account->Address), stdin); 


    //Add address to List 


}

void InsertNationalID(long long int* NationalID)
{
    
    int count=0;

    while (count < 14)
    {
        count=0;

        printf("\nEnter A valid National ID: ");

        scanf("%lld", NationalID);

        
        // check the length of the national ID
    
        /**
        - iterate at least once, then until n becomes 0
        - remove last digit from n in each iteration
        - increase count by 1 in each iteration
        **/
       long long int n = *NationalID
;
        do {
            n /= 10;
            ++count;
        } while (n != 0);
    }

  

 
}


void InsertAge(BankAccount* client_Account)
{
  
    printf("Enter Age: ");
    scanf("%d", &client_Account->Age);
    

    if (client_Account->Age <21)
    {
        
        printf("\nneed Guardian");
        // Guardian NAtional ID
        InsertNationalID(&client_Account->Guardian_NationalID);
        

    }
    else
    {
        client_Account->Guardian_NationalID=0;

    }


}

void CreateBankAccountID(BankAccount* client_Account)
{
    

     // First digit must be non-zero:
     do
     {
        //sets the starting point for producing random integers."acts as a seed"
         srand(time(0));
         client_Account->BankAccountID = rand() % 10;
     } while(client_Account->BankAccountID == 0);
     
     for(int i = 1; i < 10; i++)
     {
         client_Account->BankAccountID *= 10; 
         client_Account->BankAccountID += rand() % 10;
     }
    


}
/*******************************************************/
/*       Agile Software Development Project            */
/*       Description:Bank Account                      */
/*       Team members: Amira, Aya, Mohamed Salama      */
/*       Date:9 May 2022                               */
/*       Version: v01                                  */
/*******************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>  
#include <time.h>
 


typedef struct Account
{
    char name[100];
    char Address[100];
    long long int NationalID;
    int Age;
    long long int Guardian_NationalID;
    unsigned long long int BankAccountID;
    char Account_Status[10];
    long long int Balance;
    unsigned long long int Password;

    
}BankAccount;


/**************************************************/
/***************Functions Prototypes***************/
/**************************************************/


void CreateBankAccount();
void Insert_Name( BankAccount* client_Account);
void InsertAddress(BankAccount* client_Account);
void  InsertNationalID(long long int* NationalID);
void InsertAge(BankAccount* client_Account);
void CreateBankAccountID(BankAccount* client_Account);
void AccountStatus(BankAccount* client_Account,int closed);
void AccountBalance(BankAccount* client_Account);
void CreatePassword(BankAccount* client_Account);



int main()
{
    printf("==============================================================================================\n");
    printf("==============================Add New Bank Account ===========================================\n");
    CreateBankAccount();

    return 0;

}

void CreateBankAccount()
{
    BankAccount NewAccount;

    /*** 1. Full name****/
    Insert_Name(&NewAccount );
    
    /*** 2. Full Address****/
    InsertAddress(&NewAccount);

    /*** 3. Insert National ID ***/
    InsertNationalID(&NewAccount.NationalID);

    /*** 4. Insert Age ***/
    InsertAge(&NewAccount);

    /*** 5. Insert Bank Account ID ***/
    CreateBankAccountID(&NewAccount);
    printf("\nBank account ID: %lld ", NewAccount.BankAccountID);

    /*** 6. Insert Account Status ***/
    AccountStatus(&NewAccount,0);

    /*** 7. Insert Account Balance ***/
    AccountBalance(&NewAccount);

    /*** 8. Create Random Password ***/
    CreatePassword(&NewAccount);
    printf("\nPassword: %lld ", NewAccount.Password);



}

void Insert_Name( BankAccount* client_Account){

    
    int count = 0;  


    /*** check number of letters ***/
    while(count< 3)
    {
        

        count = 0;
        printf("Enter at least your first four names: ");  
        
        // read name
        fgets(client_Account->name , sizeof(client_Account->name), stdin);




        for(int i = 0; i < strlen(client_Account->name); i++) {  
            if(client_Account->name[i] == ' ')  
            {
            count++; 
            }
              
        }  

    }

    // Add name to the list


}

void InsertAddress(BankAccount* client_Account)
{
    
    printf("Enter Your Full Address: ");
    fgets(client_Account->Address, sizeof(client_Account->Address), stdin); 


    //Add address to List 


}

void InsertNationalID(long long int* NationalID)
{
    
    int count=0;

    while (count < 14)
    {
        count=0;

        printf("\nEnter A valid National ID: ");
        scanf("%lld", NationalID);

        
        // check the length of the national ID
    
        /**
        - iterate at least once, then until n becomes 0
        - remove last digit from n in each iteration
        - increase count by 1 in each iteration
        **/
       long long int n = *NationalID
;
        do {
            n /= 10;
            ++count;
        } while (n != 0);
    }

  

 
}


void InsertAge(BankAccount* client_Account)
{
  
    printf("Enter Age: ");
    scanf("%d", &client_Account->Age);
    

    if (client_Account->Age <21)
    {
        
        printf("\nneed Guardian");
        // Guardian NAtional ID
        InsertNationalID(&client_Account->Guardian_NationalID);
        

    }
    else
    {
        client_Account->Guardian_NationalID=0;

    }


}

void CreateBankAccountID(BankAccount* client_Account)
{
    

     // First digit must be non-zero:
     do
     {
        //sets the starting point for producing random integers."acts as a seed"
         srand(time(0));
         client_Account->BankAccountID = rand() % 10;
     } while(client_Account->BankAccountID == 0);
     
     for(int i = 1; i < 10; i++)
     {
         client_Account->BankAccountID *= 10; 
         client_Account->BankAccountID += rand() % 10;
     }
    


}


void AccountStatus(BankAccount* client_Account,int closed)
{
   

    // Restriction 
    if (closed ==1){
 
        strcpy(client_Account->Account_Status, "Restricted");

    }
    else
    {
        
        strcpy(client_Account->Account_Status, "Active");

    }
    

}

void AccountBalance(BankAccount* client_Account)
{
    
    printf("\nAdd Account Balance: ");
    scanf("%lld", &client_Account->Balance);
    
}
void CreatePassword(BankAccount* client_Account)
{
    

    /***Create 10 digit Random Password***/
     
     // First digit must be non-zero:
     do
     {
        
         client_Account->Password = rand() % 10;
     } while(client_Account->Password == 0);
     
     for(int i = 1; i < 10; i++)
     {
         client_Account->Password *= 10; 
         client_Account->Password += rand() % 10;
     }
    


}


void AccountStatus(BankAccount* client_Account,int closed)
{
   

    // Restriction 
    if (closed ==1){
 
        strcpy(client_Account->Account_Status, "Restricted");

    }
    else
    {
        
        strcpy(client_Account->Account_Status, "Active");

    }
    

}

void AccountBalance(BankAccount* client_Account)
{
    
    printf("\nAdd Account Balance: ");
    scanf("%lld", &client_Account->Balance);
    
}
void CreatePassword(BankAccount* client_Account)
{
    

    /***Create 10 digit Random Password***/
     
     // First digit must be non-zero:
     do
     {
        
         client_Account->Password = rand() % 10;
     } while(client_Account->Password == 0);
     
     for(int i = 1; i < 10; i++)
     {
         client_Account->Password *= 10; 
         client_Account->Password += rand() % 10;
     }
    


}