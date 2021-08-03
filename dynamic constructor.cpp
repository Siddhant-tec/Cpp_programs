#include<iostream>
using namespace std;
class dyn{
	int *ptr;
	public:
		dyn(){
			ptr=new int;
			*ptr=100;
		}
		dyn(int v){
			ptr=new int;
			*ptr=v;
		}
		int display(){
			return(*ptr);
		}
		};
		int main(){
			dyn obj1,obj2(90);
			cout<<"\nthe value of obj 1 is : "<<endl;
			obj1.display();
			cout<<"the value of obj 2 is : "<<endl;
			obj2.display();
			return 0;
		}
