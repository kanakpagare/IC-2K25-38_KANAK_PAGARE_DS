#include <iostream>
using namespace std;
int main() {
    int arr[]= { 2,4,6,8,10};
    int n = 5;

    int start = 0;
    int end = n-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout<< "reversed array : ";
    for(int i = 0; i<n ; i++){
        cout<< arr[i]<<" ";
    }

    return 0;
}
