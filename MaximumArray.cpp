#include <iostream>
#include <vector>
using namespace std;

// Array Traversal.
int FindMaxArr(vector<int> &arr){


    int maxArr = arr[0];
    for (int i = 0; i < arr.size(); i++){
    
        if (arr[i] > maxArr){
        
            maxArr = arr[i];
        }
    }

    return maxArr;
}

int main(){

    vector<int> arr = {2, 4, 1, 5, 8};
    cout << FindMaxArr(arr) << endl;

    return 0;
}