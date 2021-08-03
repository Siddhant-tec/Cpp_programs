#include<iostream>
using namespace std;
class employee
{
int emp_no;
char emp_name[20];
float emp_sal;
public:
void get();
void dis();
};
void employee::get()
{

cout<<"Enter employee number:";
cin>>emp_no;
cout<<"Enter employee name:";
cin>>emp_name;
cout<<"Enter salary:";
cin>>emp_sal;
}
void employee::dis()
{
cout<<"\n\tEmployee Details";
cout<<"\n\t   Number : "<<emp_no;
cout<<"\n\t    Name  : "<<emp_name;
cout<<"\n\t   Salary : "<<emp_sal;
}
int main()
{
int n ,i;
employee emp[100];
cout<<"Enter the information of your desired number of employee ";
cin>>n;
for(i=0;i<n;i++){
cout<<"Enter the information of "<<i+1<<" employee\n";
emp[i].get();
}
for(i=0;i<n;i++){
cout<<"the entered employee's information is :\n";
emp[i].dis();

}

return 0;
}
