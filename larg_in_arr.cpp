#include <iostream>
using namespace std;

int main() {
    
    int arr[100], n, i, highest;
    
    cout << "Enter the size of an array( Max 100) \n";
    cin >> n;
    
    cout << "Enter array elements \n";
    
    //Take input values
    
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    
    //Assign first value 
    
    highest = arr[0];
    
    //Traverse an array
    
    for(i = 0; i < n; i++) {
        
        //If any value is greater than highest
        
        if(arr[i] > highest) {
            highest = arr[i];
        }
    }
    
    //Print largest number
    
    cout << "Largest number " << highest;
    
    return 0;
}
