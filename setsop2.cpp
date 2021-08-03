
#include<iostream>

using namespace std;

void getUnion(int set1[5], int set2[5], int m, int n){

int i=0,j=0;
while(i<m && j<n){
        if (set1[i]<set2[j])
        cout<<set1[i++]<<" ";

        else if (set2[j]<set1[i])
            cout<<set2[j++]<<" ";

        else{
            cout<<set2[j++]<<" ";
            i++;
        }
}
while(i<m)
    cout<<set1[i++]<<" ";
while(j<n)
      cout<<set2[j++]<<" ";

}


void getIntersection(int set1[5], int set2[5], int m, int n)
{
  int i = 0, j = 0;
  while (i < m && j < n)
  {
    if (set1[i] < set2[j])
       i++;
    else if (set2[j] < set1[i])
       j++;
    else /* if arr1[i] == arr2[j] */
    {
       cout << set2[j] << " ";
       i++;
       j++;
    }
  }
}


void getData(void){
    int i,j;
    int m,n;
	int set1[5];
    int set2[5];
	cout<<"Enter the number of elements of the 1st set \n";
	cin>>m;
	for(i=0;i<m;i++){
		cout<<"Enter element "<<i+1<<" number of the set\n";
		cin>>set1[i];
	}
	cout<<"Your first set is : {";
	for(i=0;i<m;i++){

		cout<<set1[i];
        cout<<",";
	}
	cout<<"}\n";


	cout<<"Enter the number of elements of the 2nd set \n";
	cin>>n;
	for(j=0;j<n;j++){
		cout<<"Enter element "<<j+1<<"number of the set\n";
		cin>>set2[j];
	}
	cout<<"Your second set is : {";
	for(j=0;j<n;j++){

		cout<<set2[j];
        cout<<",";
	}
	cout<<"}\n";

}



int main(){

  int set1[5],set2[5];
  int i=0,j=0;
  int m;
  int n;
    m=sizeof(set1)/sizeof(set1[0]);
    n=sizeof(set2)/sizeof(set2[0]);
 getData();
    cout<<"Union of the two sets is : {";
 getUnion(set1,set2,m,n);
    cout<<"}\n";
getIntersection(set1,set2,m,n);
    cout<<"Intersection of two sets is : {";
    cout<<"}\n";
  return 0;


}
