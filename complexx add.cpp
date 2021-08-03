#include<iostream>
using namespace std;
class complex{
	float x,y;
	public:
	void getdata();
	void add(complex c1,complex c2);
	void putdata();
	
};
void complex::getdata() {
	cout<<"Enter the values of x";
	cin>>x;
	cout<<"enter the value of y";
	cin>>y;
	
}
void complex::putdata(){
	cout<<x<<"+j"<<y<<endl;
	
}
void complex::add(complex c1,complex c2){
	x=c1.x+c2.x;
	y=c1.y+c2.y;
	
	
} 
int main(){
	
	complex c1,c2,c3;
	c1.getdata();
	c2.getdata();
	c3.add(c1,c2);
	cout<<"c1= ";
	c1.putdata();
	cout<<"c2= ";
	c2.putdata();
	cout<<"c3= ";
	c3.putdata();
	return 0;
}
