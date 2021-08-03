#include<iostream>
using namespace std;
class rectangle{
	int width , height ;
	public:
		rectangle()
		{
		}
		rectangle(int x,int y):width(x),height(y){
		}
		int area(){
			
		return (width*height);
}
		friend rectangle duplicate(const rectangle&);
	};
	rectangle duplicate(const rectangle& param)
	{
		rectangle res;
		res.width=param.width*2;
		res.height=param.height*2;
		return res;
	}
	int main(){
		rectangle foo;
		rectangle bar(2,3);
		foo=duplicate(bar);
		cout<<foo.area() <<endl;
		return 0;
	}
	
