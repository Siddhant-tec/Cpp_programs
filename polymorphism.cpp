#include<iostream>
using namespace std;
class shape{
	public:
		virtual void draw(){
		cout<<"drawing..."<<endl;
		}
		};
		class circle:public shape{
			public:
				void draw()
				{
					cout<<"drawing circle..."<<endl;
					
				}
				
		};
		class rectangle:public shape{
			public:
				void draw()
				{
					cout<<"drawing rectangle....."<<endl;
				}
		};
		int main(void){
			shape *s;
			shape sh;
			rectangle rec;
			circle cir;
			s=&sh;
			s->draw();
			s=&cir;
			s->draw();
			s=&rec;
			s->draw();
			
		}

