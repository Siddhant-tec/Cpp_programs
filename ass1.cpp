#include<iostream>
using  namespace std;
class bank {
	public:
		int bal;
		bank(void);
		bank(int balance);
		putdata();
};

bank::bank(void)
{
	
	bal=500;
}
bank::bank(int ba l2)
{
	bal2=1000;
	
}
int putdata(int bal & bal2){
	cout<<"Balance is :"<<bal<<endl;
	cout<<"Balance is :"<<bal2;
	}
int main(){
	bank a;
	a.putdata();
	return 0;
	
}
