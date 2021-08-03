#include<iostream>
class student{

public:
char name[10];
int id[3];
void setvalue();
void printdata();
};
void student :: setvalue(){

id =101;
name = Sidhant;
};

void student::printdata(){

cout<< "the enter information is  "<<endl;
cout<<"id is"<<id;
cout<<"name is"<<name;
};

int main(){

student s;
s.setvalue();
s.printdata();
return 0;
}


