#include <stdio.h>
#include "myBank.h"
char ch;
#define size 50

double account [size][2]={0}; // 2 cells [1] for if is empty or not, and the other [0] for cash
//**************************************
void close()
{
	int i;
	for(i=0;i<size;i++)
	{
	account[i][1]=0;
	account[i][0]=0;
	}

}
//************************************************
void BufferClean()
{
	 char clear;
	 while ((clear = getchar()) != '\n' && clear != EOF);//  Buffer cleanner- need to put it into function
}

//*****************************************
void open_account (double cash)
{ // char O

    int i=0;
    while (i< size-1 && account[i][1]==1) //account [i][1]==1 is open. ; 1 is open, 0 is empty;
    {
        i++;
    }
    if (account[i][1]==0) //account [i][1]==0 is empty
    {
        account[i][1]=1;
        account[i][0]=cash;
        int numAccount=i+901;
        printf("open numAccount\n");
        printf("Num of Account: %d\n",numAccount);
    }
    else
    	printf("The account space is full\n");
}

//****************************************
void balance (int numAccount)
{
    int num=numAccount-901;

    if (account[num][1]==1)
    {
    printf ("your balance is: %.2lf \n", account[num][0]);
    }
    else
    printf ("this account is Close\n");


} // end balcnce

//****************************************************
void Deposit (int numAccount, double cash)
{
    int num=numAccount-901;
    if (account[num][1]==1 && !(account[num][0]+cash <0))
    { // the accunt bank is open AND dont get minus
     account[num][0]+=cash;   
     printf ("your balance now is: %.2lf \n", account[num][0]);
    } // end if the account bank is open

    else // the account bank is close or empty
    printf ("This account is Close, Or the account is open BUT you Not alowwd to do this opreation\n");

}

//*******************************************************


void withdraw (int numAccount,double cashWithdraw)
{
    cashWithdraw=-cashWithdraw;
    Deposit(numAccount,cashWithdraw);
}

//***********************************************************
void closeAccount (int numAccount)
{
    numAccount=numAccount-901;
    if (account[numAccount][1]==1)
    	{ //check if is open
        	account[numAccount][1]=0;
            account[numAccount][0]=0;
            printf (" Account Number:%d is closed now!\n",numAccount+901);
        } // end if open
    else
    	printf ("this Account isn't open\n");

} //end function

//******************************************************************
void interest (double ribit)
{
    int i=0;
    int flag2=0;
    while (i<size)
    {
        if (account[i][1]==1)
        {
        	flag2++;
            account[i][0]= (account[i][0]*((ribit)/100) + account[i][0]);
        }
        i++;
    } //end while
    if(flag2==0)
    	printf ("there is no open accounts to intrest!\n");
    else
    printf ("%0.2lf%% interest was added to all the accounts\n",ribit);
} // end function

//************************************************************************
void print ()
{
    int i=0;
    int flag1=0;
    while (i<size)
    {
        if (account[i][1]==1)
        {
        	flag1++;
            printf ("in your account Number: %d, the Balance is %0.2lf: \n", i+901,account[i][0]);
        } // end if
        i++;
    } // end while
    if(flag1==0)
    	printf ("there is no open accounts to printing!\n");

}
