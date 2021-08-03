#include<iostream>
#include<math.h>
using namespace std;

int main(){
int i,n,x,poly[10];
int sum=0;
cout<<"Enter the degree of polynomial or highest power of x: ";
cin>>n;
for(i=n;i>=0;i--){
cout<<"Enter the co-efficient of "<<i<<"th power of x: ";
cin>>poly[i];
}
cout<<"\nThe polynomial is : p(x)= ";
for(i=n;i>=0;i--){
    cout<<poly[i]<<"(x^"<<i<<")+";

}
cout<<"0";
cout<<"\nEnter the value of x: ";
cin>>x;
for(i=n;i>=0;i--){
sum=sum+poly[i]*pow(x,i);
}
cout<<"\nThe solution of the given Polynomial p(x) is: "<<sum;
return 0;
}
