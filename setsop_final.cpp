#include<iostream>
using namespace std;


// declaring function for performing UNION operations on set
void getUnion(int set1[5], int set2[5], int m, int n){
      cout<<"\n\tUnion of the two sets is : {";
int i=0,j=0;
while(i<m && j<n){
        if (set1[i]<set2[j])
        cout<<set1[i++]<<",";

        else if (set2[j]<set1[i])
            cout<<set2[j++]<<",";

        else{
            cout<<set2[j++]<<",";
            i++;
        }
}
while(i<m)
    cout<<set1[i++]<<",";
while(j<n)
      cout<<set2[j++]<<",";

cout<<"}\n";
}

//declaring function for performing INTERSECTON operation in set
void getIntersection(int set1[5], int set2[5], int m, int n)
{
     cout<<"\n\tIntersection of two sets is : {";

  int i = 0, j = 0;
  while (i < m && j < n)
  {
    if (set1[i] < set2[j])
       i++;
    else if (set2[j] < set1[i])
       j++;
    else /* if arr1[i] == arr2[j] */
    {
       cout << set2[j] << ",";
       i++;
       j++;
    }
  }

  cout<<"}\n";
}

//declaring function for performing DIFFERENCE operation
void getDifference(int set1[5],int set2[5],int m,int n){

  cout<<"\n\tDifference of the two sets is : {";
 int i = 0, j = 0;
    while (i < n && j < m)
    {

        if (set1[i] < set2[j])
        {
            cout << set1[i]<<",";
            i++;
        }
        else if (set2[j] < set1[i])
        {
            cout << set2[j]<<",";
            j++;
        }


        else
        {
            i++;
            j++;
        }
    }

    cout<<"}\n";
}


int main(){
    int i=0,j=0;
    int m,n;
	int set1[5];
	int choice;
	int set2[5];

       m=sizeof(set1)/sizeof(set1[0]);
       n=sizeof(set2)/sizeof(set2[0]);


    cout<<"Welcome to the SETS OPERATIONS program!\n";
    cout<<"Please Enter the values in first set and second set to perform various types of SET OPERATIONS :\n";

    //Program for the input of 1st set
	cout<<"\nEnter the SIZE of the 1st set : \n";
	cin>>m;
	for(i=0;i<m;i++){
		cout<<"Enter element "<<i+1<<" number of the set\n";
		cin>>set1[i];
	}
	cout<<"Your first set is : {";
	for(i=0;i<m;i++){

		cout<<set1[i];  //Displaying 1st set
        cout<<",";
	}
	cout<<"}\n";

	//Program for the input of 2nd set


	cout<<"Enter the SIZE of the 2nd set : \n";
	cin>>n;
	for(j=0;j<n;j++){
		cout<<"Enter element "<<j+1<<" number of the set\n";
		cin>>set2[j];
	}
	cout<<"Your second set is : {";
	for(j=0;j<n;j++){

		cout<<set2[j];  //Displaying 2nd set
        cout<<",";
	}
	cout<<"}\n";


	//Main Menu program
	cout<<("\n\t#MAIN MENU");
	cout<<("\n\tFollowing Set Operations are supported :");
	cout<<("\n\t------------------------------------------");
    cout<<("\n\t 1.UNION \n\t 2.INTERSECTION\n\t 3.DIFFERENCE\n\t 4.EXIT\n");

do{
   cout<<("\n Enter the your desired choice: ");
   cin>>choice;
   switch(choice){
   case 1:{
           getUnion(set1,set2,m,n);
           break;
   }
   case 2:{
           getIntersection(set1,set2,m,n);
        break;
   }
   case 3:{
           getDifference(set1,set2,m,n);
       break;
   }
   case 4:{
       cout<<("\n\tExiting program.......\n");
       break;
   }
   default:
    {
        cout<<("\n\tEnter a valid choice");

    }
   }
}
while(choice!=4);


  return 0;

}






