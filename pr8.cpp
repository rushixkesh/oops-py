#include<iostream>

using namespace std;


int main(){

int size, i, j, temp;

cout<<"\n Enter the size of array\n";

cin>>size;

int a[size];

cout<<"\n Enter the array elements\n";

for(i=0; i<size; i++){

cin>>a[i];

}

for(i = 0; i < size; i++){

for(j = i+1; j >= 1; j--){	
if(a[j] < a[j-1]){	
temp = a[j];	
a[j] = a[j-1];	
a[j-1] = temp;	
}	
}	
}	
cout<<"\n Sorted Array Elements are as follows:\n";	
for(i = 0; i < size; i++){	
cout<< a[i] <<endl;	
}	
return 0;	
}	
