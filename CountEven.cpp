#include <iostream>
#include <vector>
using namespace std;

// Count Even Number
int CountEven(vector<int> &arr){
    int count = 0;
      for(int i=0; i<arr.size(); i++){
        
        //Check Condition.
        if(arr[i] % 2 == 0){
         count++;
        }
      }
      return count;
}

int main(){
    vector<int> arr = {1, 2, 4, 7, 8};
    cout << CountEven(arr) << endl;
    return 0;
}