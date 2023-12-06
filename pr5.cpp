#include<iostream>

using namespace std;


class student{

protected:

string name;

int roll_no;

public:

void get_data(void);

void display_data(void);

};

class marks : public student{

protected:

int sub1,sub2,sub3,sub4,sub5;

public :

void get_marks();

};	
class result : public marks{	
float per;	
public :	
void cal_per();	
void display_per();	
};	
void student :: get_data(){	
cout<<"\n Enter Name and roll no. of student\n";	
cin>>name >>roll_no;	
}	
void student :: display_data(){

cout<<"\n Name\t\t:"<<name;

cout<<"\n Roll no.\t:"<<roll_no;

}

void marks :: get_marks(){

cout<<"\n Enter the marks of 5 subjects\n";

cin>>sub1 >>sub2 >>sub3 >>sub4 >>sub5;

}

void result :: cal_per(){

per = (sub1+sub2+sub3+sub4+sub5)/5.0f;

}

void result :: display_per(){

cout<<"\n Percentage\t:"<<per<<"%";

}	
int main(){	
result s1;	
s1.get_data();	
s1.get_marks();	
s1.cal_per();	
s1.display_data();	
s1.display_per();	
}