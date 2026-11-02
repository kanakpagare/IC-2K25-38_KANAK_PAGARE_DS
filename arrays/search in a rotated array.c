#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void ReplaceWithGreatestRight( vector<int>& arr){
    int n= arr.size();
    int maxFromRight = -1;
    //traverse from right to left 
    for(int i = n-1; i>=0; i--){
        int currentVal = arr[i];
        arr[i] = maxFromRight;
        maxFromRight = max(maxFromRight,  currentVal);
    }
}
int main(){
    vector<int> arr ={16,17,8,4,3,2,5};
    ReplaceWithGreatestRight(arr);
    cout<< "Modified array: ";
    for( int x: arr){
        cout<<x<<" ";
    }
    return 0;
}
