#include <stdio.h>
#include "myBank.h"
char ch;
#define size 50

double account [size][2]={0}; // 2 cells [1] for if is empty or not, and the other [0] for cash

void BufferClean()
{
	 char clear;
	 while ((clear = getchar()) != '\n' && clear != EOF);//  Buffer cleanner- need to put it into function
}

void open_account (double cash)
{ // char O
    printf("open numAccount\n");
    int i=0;
    while (i< size && account[i][1]==1) //account [i][1]==1 is open. ; 1 is open, 0 is empty;
    {
        i++;
    }
    if (account[i][1]==0) //account [i][1]==0 is empty
    {
        account[i][1]=1;
        account[i][0]=cash;
        int numAccount=i+901;
        printf("Num of Account: %d\n",numAccount);
    }
}
void balance (int numAccount)
{
    int num=numAccount-901;
    if (num<0 || num>=0)
    {
    if (account[num][1]==1){
    printf ("your balance is: %lf \n", account[num][0]);
    }
    else
    printf ("this account is Close\n");
    }

    else  // if num is not in the range
    {
    printf ("your number will need to be between 901-950\n");
    } // end else
} // end balcnce

void Deposit (int numAccount, double cash){
    int num=numAccount-901;
    if (num<=0 || num>=0)
    {
    if (account[num][1]==1)
    { // the accunt bank is open
     account[num][0]+=cash;   
     printf ("your balance now is: %lf \n", account[num][0]);
    } // end if the account bank is open
    else // the account bank is close or empty
    printf ("this account is Close\n");
    }
    else
{
    printf ("your number will need to be between 901-950\n");
} // end else

} //end Deposit


void withdraw (int numAccount,double cashWithdraw)
{
    cashWithdraw=-cashWithdraw;
    Deposit(numAccount,cashWithdraw);
}
void closeAccount (int numAccount){
    numAccount=numAccount-901;
     if (numAccount<0 || numAccount>0){
         if (account[numAccount][1]==1){ //check if is open
                account[numAccount][1]=0;
                 account[numAccount][0]=0;
         } // end if open
         else
         {
             printf ("this Account isn't open\n");
         } // end else

} //
} //end function
void interest (double ribit){
    int i=0;
    while (i<size)
    {
        if (account[i][1]==1){
            account[i][0]= (account[i][0]*((ribit)/100) + account[i][0]);
        }
        i++;
    } //end while
} // end function
void print (){
    int i=0;
    while (i<size){
        if (account[i][1]==1){
            printf ("in your account Number: %d, the Balance is %0.2lf: \n", i+901,account[i][0]);
        } // end if
        i++;
    } // end while







}
