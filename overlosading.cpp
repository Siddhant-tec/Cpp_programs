#include<iostream>
using namespace std;
class test {

	private:
		int num;
		public:
			test():num(5){
			}
			void operator ++(){
				num=num+2;
			}
void printf(){
	cout<<"the cont is "<<num;
}
};
int main()
{
	test tt;
	++tt;
	tt.printf();
	return 0;
}



