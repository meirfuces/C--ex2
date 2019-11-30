#include <stdio.h>
#include "myBank.h"


int main()
{

char ch='p'; //char of the menu selection
double ribit;
int numAccount;
double cash;
int flag=0; //Flags of "scanf checking".
int flag2=0;
int flag3=0;


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
flag3=0;



switch (ch)
{


//***************************Menu Selction*******************************

//***************************	'O'		*******************************
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
//***********************	B	*******************************
	case 'B':

    printf("Account number?:   \n");
    flag2=scanf("%d", &numAccount);


    BufferClean();

    if (flag2==1)
        {
    if (numAccount<951 && numAccount>900)
    	{
    	balance(numAccount); //balance
    	break;
        }
        }

    	printf("Error:you enter wrong value for AccountNumber!!\n");
    	break;

    //*******************	D	**********************
    case 'D':

    printf("Account number?:   \n");
    flag2=scanf("%d" ,&numAccount);


    BufferClean();

    if ( (!(numAccount<951 && numAccount>900)) || flag2!=1)
    {
    	printf("Error:you enter wrong value for AccountNumber!!\n");
       	break;
    }

    else
    {
    printf("Enter the cash for deposit:  \n");
    flag3=scanf("%lf"  ,&cash);

    BufferClean();

    if(flag3==1)
    {

    if (cash>0)
    {
    Deposit(numAccount, cash);
    break;
    }

    }

    printf("the value must number &  positive \n");
    break;

    }
    break;
//*************************		W	******************************

    case 'W': // meshich

     printf("Account number?:  \n");
     flag2=scanf("%d" ,&numAccount);


     BufferClean();

     if ( (!(numAccount<951 && numAccount>900)) || flag2!=1)
    {
       printf("Error:you enter wrong value for AccountNumber!!\n");
       break;
    }

    else
    {
    printf("Enter the cash for withdraw:  \n");
    flag3=scanf("%lf"  ,&cash);


    BufferClean();

    if(flag3==1)
    {
    if (cash>0)
    {
    withdraw(numAccount, cash);
    break;
    }
    }
    printf("the value must be number & positive \n");
    break;

    }
    // functionW
    break;
//***********************	C	*********************

    case 'C': //close
    printf("Account number?:  \n");
    flag2=scanf(" %d", &numAccount);
    BufferClean();
    if (flag2==1)
    {
    	if ((numAccount<951 && numAccount>900))
    	{
    		closeAccount(numAccount);
    		break;
    	}
    }

    printf("Error:you enter wrong value for AccountNumber!!\n");
    break;

//********************	I	***********************
    case 'I': // interest ribit
    printf("Interest rate?  \n");
    flag2=scanf("%lf", &ribit);

    BufferClean();

    if (flag2==1 &&(ribit>0))
    	interest(ribit);
    else
    	printf("Error:you enter wrong value for ribit\n");

    break;
//**************	P	********************
    case 'P'://print all
    print();
    break;
//******************	E	******************
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
