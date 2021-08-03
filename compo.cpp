#include<iostream>
#include<math.h>
using namespace std;

int main(){
int x,y,z,i,j,n;
int sol=0;
//int a,b;

char f[100];
char g[100];
cout<<"Enter the function f(x)\n";
cout<<"Enter the degree of polynomial f(x) or highest power of x: ";
cin>>n;
for(i=n;i>=0;i--){
cout<<"Enter the co-efficient of "<<i<<"th power of x: ";
cin>>f[i];
}
cout<<"\nThe polynomial is : f(x)= ";
for(i=n;i>=0;i--){
    cout<<f[i]<<"(x^"<<i<<")+";

}
cout<<"0\n";
cout<<"\nEnter the function g(y)\n";
cout<<"Enter the degree of polynomial g(y) or highest power of y: ";
cin>>n;
for(j=n;j>=0;j--){
cout<<"Enter the co-efficient of "<<j<<"th power of y: ";
cin>>g[j];
}
cout<<"\nThe polynomial is : g(y)= ";
for(j=n;j>=0;j--){
    cout<<g[j]<<"(y^"<<j<<")+";

}
cout<<"0\n";

cout<<"Enter the value of z";
//cin>>z;
for(i=n;i>=0;i--){
 for(j=n;j>=0;j--){
sol=f[i]*g[j];
 }
}
cout<<"The solution of f(g(x)) or fog of selected values is: "<<sol<<endl;
return 0;
}

