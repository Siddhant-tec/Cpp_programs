#include<iostream>
using namespace std;
class emp{
	public:
		int id;
		int sal;
		
		emp(){
	  cout<<"Default Constructore is Invocked";
       }
       
   emp(int x, int y){
	cout<<"employee details"<<endl;
	id=x;
	sal=y;
   }
	

emp(const emp &c){
	this->id=c.id;
	this->sal=c.sal;
	
}

void display(){
	cout<<"id ="<<id<<endl;
	cout<<"salary = "<<sal; 
}

};




int main(){
     emp a;
	 a=emp(1,200);
	a.display();
	return 0;
}
