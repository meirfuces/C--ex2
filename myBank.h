#ifndef _MYBANK_H_
#define _MYBANK_H_
#define size 50
double account [size][2]; // 2 cells [1] for if is empty or not, and the other [0] for cash
void close();
void BufferClean() ;
void open_account (double cash);
void balance (int numAccount);
void Deposit (int numAccount, double cash);
void withdraw (int numAccount,double cashWithdraw);
void closeAccount (int numAccount);
void interest (double ribit);
void print ();

#endif
