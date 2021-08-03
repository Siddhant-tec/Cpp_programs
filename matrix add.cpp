#include<iostream>
using namespace std;      
class matrix{
	
	int i,j,a[3][3];
	public:
		void getdata();
		void putdata();
		void add(matrix m1, matrix m2);
		
};
void matrix::getdata(){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
			
		}
	}
}
void matrix::putdata(){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
void matrix::add(matrix m1,matrix m2){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			a[i][j]=m1.a[i][j]+m2.a[i][j];
		}
	}
}
int main(){
	
	matrix m1,m2,m3;
	cout<<"enter first matrix :"<<endl;
	m1.getdata();
	cout<<"enter second matrix: "<<endl;
	m2.getdata();
	m3.add(m1,m2);
	cout<<"matrix1  "<<endl;
	m1.putdata();
	cout<<"matrix2  "<<endl;
	m2.putdata();
	cout<<"matrix3  "<<endl;
	m3.putdata();
	return 0;

} 
