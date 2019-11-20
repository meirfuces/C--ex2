#include <stdio.h>
#include "myBank.h"
char ch;
#define num_bank 50;
double account [nu][num2]; // 2 cells [1] for if is empty or not, and the other [0] for cash
void open_account (double cash){ // char O 
    int i=0;
    while (i< 50 && account[i][1]==0)
    {
        i++;
    }
    if (account[i][1]==0)
    {
        account[i][1]=1     ;
        account[i][0]=cash;
        printf("Num of Account: " + i+901);
    }
}
void balance (int numAccount){
    int num=numAccount-901;
    if (num<0 || num>0){
    if (account[num][1]==1){
    printf ("your balance is: %lf \n", account[num][0]);
    }
    else
    printf ("your number is not open");
    }
else
{
    printf ("your number will need to be between 901-950");
} // end else
} // end balcnce

void Deposit (int numAccount, double cash){
     int num=numAccount-901;
    if (num<0 || num>0){
    if (account[num][1]==1){
     account[num][0]+=cash;   
    printf ("your balance now is: %lf \n", account[num][0]);
    }
    else
    printf ("your number is not open");
    }
    else
{
    printf ("your number will need to be between 901-950");
} // end else
}