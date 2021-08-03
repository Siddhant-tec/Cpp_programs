#include<iostream>
using namespace std;
int main(){
	
	int a,b,c;
	int max;

cout<<"enter the three desired numbers\n ";
cin>>a>>b>>c;
max=(a>b)?((a>c)?a:c):((b>c)?b:c);
cout<<"max number is :"<<max;
return 0;

}
