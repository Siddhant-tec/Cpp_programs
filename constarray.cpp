#include<iostream>
using namespace std;
class number{
private:
	int num;
{
    pubic:
	
		number(){
			num=3;
		}
		number(int n){
			num=n;
			
		}
		void dispnumber(){
			cout<<"num is :"<<num<<endl;
			
		}
		};
		int main(){
			number n[3]=[number(10),number(20),number(30)];
			n[0].dispnumber();
			n[1].dispnumber();
			n[2].dispnumber();
			return 0;
		}

