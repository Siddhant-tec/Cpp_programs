
#include <iostream>
#include <math.h>
using namespace std;

void printPowerSet(int *set, int set_size)
{

    unsigned int pow_set_size = pow(2, set_size);
    int counter, j;


    for(counter = 0; counter < pow_set_size; counter++)
    {
    for(j = 0; j < set_size; j++)
    {
       // TO check if jth bit in the counter is set If set then print jth element from set
        if(counter & (1 << j))
            cout << set[j];
    }
    cout << endl;
    }
}


int main()
{

    int n,i;
    int set[10];
    cout<<"Enter the size of set : ";
    cin>>n;
    cout<<"Enter the value in the set";
    for(i=0;i<n;i++){
    cout<<"print the "<<i+1<<"th element of the set";
    cin>>set[i];
    }
    cout<<"your set is : ";
    cout<<"{";
    for(i=0;i<n;i++){
    cout<<set[i];
}
cout<<"}";

void printPowerSet(int set[i],5);
    return 0;
}
