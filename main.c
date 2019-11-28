#include <stdio.h>
#include <string.h>
#include "myBank.h"




int main()
{


char ch []="hipopotamus ginton durlacher and meir foxi";
double ribit;
int numAccount;
double cash;
int flag=0;


printf("OPREATIONS DICTIONARY \n 'O' =Open  \n 'B' =Balance  \n 'D' =Deposit  \n 'W' =Withdraw  \n 'C' =Close  \n 'I' =Interest  \n 'P' =Print  \n 'E' =Exit  \n please dont enter other value!\n");


while (ch[0]!='E')
{
ch[0]='p',ch[1]='o';




while(strlen(ch)!=1) //loading only one char
{
numAccount=0;
cash=0;

printf("Transaction type?: \n");
scanf(" %s", ch);

if(strlen(ch)!=1)
	printf(" Error! this key is not correct\n");

BufferClean();
}




switch (ch[0])
{


//*****************************************************************
case 'O':
    printf("\nInitial deposit:  \n");
    flag=scanf("%lf", &cash);



    BufferClean();

    if (flag==1)
    {
    if (cash>-1)
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
    if (cash>-1)
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
