#include<iostream>
using namespace std;

float getsum(float a,float b)
{return (a+b);
}

int main(){
	float num1,num2,sum;
	cout<<"enter the values of two numbers for addition operation ";
	cin>>num1>>num2;
	 
	sum=getsum(num1,num2);
	cout<<"Sume of the chosen number is : "<<sum;
	return 0;
	
}
