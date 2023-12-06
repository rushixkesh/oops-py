#include<iostream>

using namespace std;

class fibonacci{

unsigned long int term1,term2,next_term;

public:

fibonacci(){

term1 = 0;

term2 = 1;

next_term = term1 + term2;

}

fibonacci (fibonacci &ptr){

term1 = ptr.term1;

term2 = ptr.term2;

next_term = ptr.next_term;

}

void increment(){

term1 = term2;

term2 = next_term;

next_term = term1 + term2;

}

void display(){

cout<<next_term <<"\t"<<endl;

}

};

int main (void){

fibonacci number;

int terms;

cout<<"\n Enter the number of terms of Fibonacci Series\n"; cin>>terms;

cout<<"\n The" <<terms <<"of Fibonacci Series are as follows:\n"; for(int i=0; i<terms;i++){

number.display();

number.increment();

}

return 0;

}