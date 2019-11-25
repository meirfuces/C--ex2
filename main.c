#include <stdio.h>
#include <string.h>
#include "myBank.h"

//char ch='p';
int flag=0;
char ch []="po";
int main()
{
int numAccount;
double cash;


printf("OPREATIONS DICTIONARY \n 'O' =Open  \n 'B' =Balance  \n 'D' =Deposit  \n 'W' =Withdraw  \n 'C' =Close  \n 'I' =Interest  \n 'P' =Print  \n 'E' =Exit  \n please dont enter other value!\n");

while (ch[0]!='E')
{
ch[0]='p',ch[1]='o';

while(strlen(ch)!=1)
{
printf("Transaction type?: \n");
scanf(" %s", ch);

if(strlen(ch)!=1)
{
	printf(" Error! this key is not correct\n");

}
BufferClean();

}


switch (ch[0])
{

    double ribit;

case 'O':
    printf("\nEnter your cash:  \n");
    flag=scanf("%lf", &cash);



    BufferClean();

    if (flag==1)
    open_account(cash); // go to account
    else
    	printf("Error: Enter vaild number for cash!! \n");
    break;

	case 'B':

    printf("Enter your number account:  \n");
    scanf("%d", &numAccount);


    BufferClean();

    if (numAccount<951 && numAccount>900)
    	balance(numAccount); //balance
    else
    	printf("Error:you enter wrong value for AccountNumber!!\n");
    break;

    //**********************************************
    case 'D':
    printf("Enter your number account:  \n");
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
    Deposit(numAccount, cash);
    }
    break;
//************************************************************

    case 'W': // meshich

     printf("Enter your number account:  \n");
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

    withdraw(numAccount, cash);
    }
    // functionW
    break;
//*********************************************

    case 'C': //close
    printf("Enter your number account for close:  \n");
    scanf("%d", &numAccount);


    BufferClean();

    closeAccount(numAccount);
    break;
//*******************************************
    case 'I': // interest ribit
    printf("Enter a intrest:  \n");
    scanf("%lf", &ribit);

    BufferClean();

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
