#include<iostream>
using namespace std;
class exforsys{
	private:
		int a,b;
		public:
			void test(){
				a=100;
				b=200;
				
			}
			friend int computer(exforsys e1);
		};
		int compute(exforsys e1)
		{
			return int(e1.a+e1.b)-5;
		}
		int main(){
			exforsys e;
			e.test();
			
       cout<<"the result us :"<<compute(e);
       return 0;
		}
		
