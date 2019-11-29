#include <stdio.h>
#include <string.h>
#include "myBank.h"




int main()
{

char ch='p';
double ribit;
int numAccount;
double cash;
int flag=0;
int flag2=0;


printf("OPREATIONS DICTIONARY \n 'O' =Open  \n 'B' =Balance  \n 'D' =Deposit  \n 'W' =Withdraw  \n 'C' =Close  \n 'I' =Interest  \n 'P' =Print  \n 'E' =Exit  \n please dont enter other value!\n");

while(ch!='E')
{


while(flag!=1)
{
numAccount=0;
cash=0;

printf("Transaction type?: \n");   //IMPORTANT NOTE: If the user writes an expression that begins with one of the real letters
								// it will treat the expression as the first letter. example: "OGFHBD" = 'O'
flag=scanf(" %c", &ch);

 if(flag!=1)
	 printf(" Error! this key is not correct\n");

BufferClean();
}



flag =0;
flag2=0;



switch (ch)
{


//*****************************************************************
case 'O':
    printf("\nInitial deposit:  \n");
    flag2=scanf("%lf", &cash);



    BufferClean();

    if (flag2==1)
    {
    if (cash>0)
    open_account(cash);// go to account
    else
    	printf("the value must be positive \n");
    }

    else
    	printf("Error: Enter vaild value for cash!! \n");


    break;
//************************************************************
	case 'B':

    printf("Account number?:   \n");
    scanf("%d", &numAccount);


    BufferClean();

    if (numAccount<951 && numAccount>900)
    	balance(numAccount); //balance
    else
    	printf("Error:you enter wrong value for AccountNumber!!\n");
    break;

    //**********************************************
    case 'D':

    printf("Account number?:   \n");
    scanf("%d" ,&numAccount);


    BufferClean();

    if (!(numAccount<951 && numAccount>900))
    {
    	printf("Error:you enter wrong value for AccountNumber!!\n");
       	break;
    }

    else
    {
    printf("Enter the cash for deposit:  \n");
    scanf("%lf"  ,&cash);


    BufferClean();
    if (cash>0)
    Deposit(numAccount, cash);
    else
    	printf("the value must be positive \n");

    }
    break;
//************************************************************

    case 'W': // meshich

     printf("Account number?:  \n");
     scanf("%d" ,&numAccount);


     BufferClean();

    if (!(numAccount<951 && numAccount>900))
    {
       printf("Error:you enter wrong value for AccountNumber!!\n");
       break;
    }
    else
    {
    printf("Enter the cash for withdraw:  \n");
    scanf("%lf"  ,&cash);


    BufferClean();
    if (cash>0)
    withdraw(numAccount, cash);
    else
    	printf("the value must be positive \n");

    }
    // functionW
    break;
//*********************************************

    case 'C': //close
    printf("Account number?:  \n");
    scanf(" %d", &numAccount);
    if (!(numAccount<951 && numAccount>900))
        {
           printf("Error:you enter wrong value for AccountNumber!!\n");
           BufferClean();
           break;
        }


    BufferClean();

    closeAccount(numAccount);
    break;
//*******************************************
    case 'I': // interest ribit
    printf("Interest rate?  \n");
    scanf("%lf", &ribit);

    BufferClean();

    interest(ribit);
    break;
//**********************************
    case 'P'://print all
    print();
    break;
//*************************************
    case 'E':
         close();
    	 printf("Bye Bye!!\n");
    break;
//****************************************
    default:
                printf(" Error! this key is not correct\n");
    // end the my bank and close the accounts
} //end swith

} // end while
} // end main
