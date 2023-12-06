#include<iostream>

using namespace std;


class student{

char name[20];

char branch[20];

int roll_no, age, sub1, sub2, sub3, sub4, sub5;

char gender;

public:

void get_details();

void display();

};


void student :: get_details(){

cout<<"\n Enter the following details of student\n"; cout<<"\n Enter the Name of Student:\n"; cin>>name;

cout<<"\n Enter the Branch of Student:\n";

cin>>branch;

cout<<"\n Enter the Roll Number of Student:\n";

cin>>roll_no;

cout<<"\n Enter the Age of Student:\n";

cin>>age;

cout<<"\n Enter the Gender of Student:\n";

cin>>gender;

cout<<"\n Enter the Marks Obtained by Student in 5 subjects:\n"; cin>>sub1 >>sub2 >>sub3 >>sub4 >>sub5;

}
void student :: display(){

cout<<"\n The detail of the student is as follows:\n"; cout<<"\n Name of Student\t\t:" <<name; cout<<"\n Branch of Student\t\t:" <<branch; cout<<"\n Roll Number of Student\t\t:" <<roll_no; cout<<"\n Age of Student\t\t:" <<age; cout<<"\n Gender of Student\t\t:" <<gender;

cout<<"\n Marks Obtained by student in 5 Subjects are as follows:";

cout<<"\n Subject-1\t\t:" <<sub1;

cout<<"\n Subject-2\t\t:" <<sub2;

cout<<"\n Subject-3\t\t:" <<sub3;

cout<<"\n Subject-4\t\t:" <<sub4;

cout<<"\n Subject-5\t\t:" <<sub5 <<endl;

}

int main(){

student s1, s2;

s1.get_details();

s2.get_details();


s1.display();

s2.display();

return 0;

}	
