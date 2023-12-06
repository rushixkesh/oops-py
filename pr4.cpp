#include<iostream>

#include<stdio.h>

#include<string.h>


using namespace std;


class bank{

int acno;

char nm[100], acctype[100];

float bal;

public:

bank(int acc_no, char *name, char *acc_type, float balance){

acno=acc_no;

strcpy(nm, name);

strcpy(acctype, acc_type);

bal=balance;

}

void deposit();

void withdraw();

void display();

};

void bank::deposit(){

int damt1;

cout<<"\n Enter Deposit Amount = ";

cin>>damt1;

bal+=damt1;

}

void bank::withdraw(){

int wamt1;	
cout<<"\n Enter Withdraw Amount = ";

cin>>wamt1;

if(wamt1>bal)

cout<<"\n Cannot Withdraw Amount";

bal-=wamt1;

}

void bank::display(){

cout<<"\n ----------------------";

cout<<"\n Accout No. : "<<acno;

cout<<"\n Name : "<<nm;

cout<<"\n Account Type : "<<acctype;

cout<<"\n Balance : "<<bal <<endl;

}

int main(){

int acc_no;

char name[100], acc_type[100];

float balance;

int ch=1;


cout<<"\n Enter Details: \n";

cout<<"-----------------------";

cout<<"\n Accout No. ";

cin>>acc_no;

cout<<"\n Name : ";

cin>>name;

cout<<"\n Account Type : ";

cin>>acc_type;

cout<<"\n Balance : ";

cin>>balance;


bank b1(acc_no, name, acc_type, balance);	
do{

cout<<"\n\n############ MENU ################\n";

cout<<"\n1. Display the details of Account";

cout<<"\n2. Deposit an amount";

cout<<"\n3. Withdraw an amount";

cout<<"\n4. Show Balance";

cout<<"\n5. Exit";

cout<<"\n Enter your choice\n";

cin>>ch;


switch(ch){

case 1:

b1.display();

break;


case 2:

b1.deposit();

break;


case 3:

b1.withdraw();

break;


case 4:

b1.display();	
break;	
case 5:	
cout<<"\nYou have been successfully exited!\n";	
exit(0);	
default:

cout<<"\n Enter the Valid Choice\n";	
}	
}while(ch!=5);	