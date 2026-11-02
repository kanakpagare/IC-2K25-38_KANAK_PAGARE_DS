#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void leftRotate(vector<int>& arr, int k){
    int n= arr.size();
    if( n==0) return;
    //handle cases where k is greater than the array size
    k = k % n; 
    //reverse the first k elements
    reverse( arr.begin(), arr.begin() + k);
    //reverse the elements from k to n-1 
    reverse(arr.begin() + k , arr.end());
    // reverse the entire array
    reverse( arr.begin(), arr.end());
}
int main(){
    vector<int> arr={ 1,2,3,4,5,6,7};
    int k= 3;
    leftRotate(arr, k);
    //output will be: 4 5 6 7 1 2 3 
    for( int num : arr){
        cout<< num<<" ";
    }
    return 0;
}
