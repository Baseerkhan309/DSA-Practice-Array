#include <iostream>
#include <vector>
using namespace std;

// Second Largest.
int SecondLargest(vector<int> &arr){

    int seclarg;    
    for(int i=0; i<arr.size(); i++){
     for(int j=1; j<arr.size(); j++){
         if(arr[i] < arr[j]){
           seclarg = arr[i];
            
        }
    }
    }
   
    
    return seclarg;
}

int main(){
    vector<int> arr = {10, 5, 20, 18, 15};
    cout << SecondLargest(arr) << endl;

    return 0;
}