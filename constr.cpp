#include<iostream>
using namespace std;
class line{
	public:
	int getlength(void);
	line(int len);
	line(const line&obj);
	~line();
	
	private:
	int*ptr;
	};
	line::line(int len){
		ptr=new int;
		*ptr=len;
	}
	line::line(const line &obj){
		cout<<"copy constructor allocating ptr "<<endl;
		ptr= new int ;
		*ptr = *obj.ptr;
	}
	line::~line(void){        ////destr
	
	cout<<"freeing memory !"<<endl;
	delete ptr;
	
}
int line::getlength(void){
	return *ptr;
}
void display(line obj){
	cout<<"length of line :"<<obj.getlength()<<endl;
	
}
int main(){
	line line1(10);
	line line2=line1;
	
	display(line1);
	display(line2);
	 return 0;
	 
}
