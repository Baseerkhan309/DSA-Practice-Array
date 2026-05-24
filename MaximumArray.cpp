#include <iostream>
#include <vector>
using namespace std;

// Find Maximum in Array.
int FindMaxArr(vector<int> &arr){
    int maximum = arr[0];

    for(int i=1; i<arr.size(); i++){
       if(arr[i] > maximum){
          maximum = arr[i];
       }
    }

    return maximum;
}


int main(){
vector<int> arr = {1,3,50,7};

cout << FindMaxArr(arr) << endl;


    return 0;
}