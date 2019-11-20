#include <stdio.h>
#include "myBank.h"
char ch;
int main(){
int numAccount;
double cash;
printf("Transaction type?: \n");
scanf("%c", &ch);

printf("the char is: %c\n",ch); // dont forget to delete
if (ch=='O'){ // open account
    printf("Enter your cash:  \n");
    scanf(%lf, &cash);
   open_account(cash); // go to account
}
if (ch=='B'){  // for balance
    printf("Enter your number account:  \n");
scanf("%d", &numAccount);
    balance(numAccount); //
}
if (ch=='D'){  // for account
printf("Enter your number account and the cash for deposit:  \n");
scanf("%lf %d" ,&cash ,&numAccount);
}