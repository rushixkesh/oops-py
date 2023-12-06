#include<iostream>

using namespace std;

class fibonacci{

int term1,term2;

public:

fibonacci(){

term1 = 0;

term2 = 1;

}

void series(int);

};	
void fibonacci :: series(int n){	
int i, next_term;	
cout << term1 <<"\t"<< term2 <<"\t";	
for(i=1; i<=n-2; i++){	
next_term = term1 + term2;	
cout <<next_term <<"\t";	
term1 = term2;	
term2 = next_term;	
}	
}	
int main(){	
fibonacci fib;	
int n;	
cout << "FIBONACCI SERIES\n";	
cout << "How many numbers? ";	
cin >> n;	

fib.series(n);

return 0;
}