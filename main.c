#include <stdio.h>
#include "myBank.h"

char ch='p';
int main()
{
int numAccount;
double cash;

printf("OPREATIONS DICTIONARY \n 'O' =Open  \n 'B' =Balance  \n 'D' =Deposit  \n 'W' =Withdraw  \n 'C' =Close  \n 'I' =Interest  \n 'P' =Print  \n 'E' =Exit  \n please dont enter other value!\n");

while (ch!='E')
{
printf("Transaction type?: \n");
scanf(" %c", &ch);
switch (ch)
{
   // double cash;
   // int numAccount;
    double ribit;

case 'O':
    printf("\nEnter your cash:  \n");
    scanf("%lf", &cash);
    open_account(cash); // go to account
    break;

	case 'B':

    printf("Enter your number account:  \n");
    scanf("%d", &numAccount);
    if (numAccount<951 && numAccount>900)
    	balance(numAccount); //balance
    else
    	printf("Error:you enter wrong value for AccountNumber!!\n");
    break;

    //**********************************************
    case 'D':
    printf("Enter your number account:  \n");
    scanf("%d" ,&numAccount);

    if (!(numAccount<951 && numAccount>900))
    {
    	printf("Error:you enter wrong value for AccountNumber!!\n");
       	break;
    }

    else
    {
    printf("Enter the cash for deposit:  \n");
    scanf("%lf"  ,&cash);
    Deposit(numAccount, cash);
    }
    break;
//************************************************************

    case 'W': // meshich
   // printf("Enter your number account:  \n");
  //  scanf("%d" ,&numAccount);
     printf("Enter your number account:  \n");
     scanf("%d" ,&numAccount);

    if (!(numAccount<951 && numAccount>900))
    {
       printf("Error:you enter wrong value for AccountNumber!!\n");
       break;
    }
    else
    {
    printf("Enter the cash for withdraw:  \n");
    scanf("%lf"  ,&cash);
    withdraw(numAccount, cash);
    }
    // functionW
    break;
//*********************************************

    case 'C': //close
    printf("Enter your number account for close:  \n");
    scanf("%d", &numAccount);
    closeAccount(numAccount);
    break;
//*******************************************
    case 'I': // interest ribit
    printf("Enter your number account:  \n");
    scanf("%lf", &ribit);
    interest(ribit);
    break;
//**********************************
    case 'P'://print all
    print();
    break;

    case 'E':
    break;
    default:
                printf(" Error! this key is not correct\n");
    // end the my bank and close the accounts
} //end swith   
} // end while
} // end main
