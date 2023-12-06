#include<iostream>

#include<string.h>

using namespace std;


class String{

char name[25];

public:

void getname(void);

void display(void);

String operator +(String);

};

void String::getname(void){

cout<<"\n Enter Name\n";

cin>>name;

}

void String::display(void){

cout<<"\n Your Full Name is " <<name <<"\n\n";

}	
String String::operator +(String m){	
class String temp;	
strcpy(temp.name, name);	
strcat(temp.name, m.name);	
return temp;	
}	
int main(){	
class String s1, s2, s3;	
s1.getname();	
s2.getname();	

s3=s1+s2;

s3.display();

return 0;
}