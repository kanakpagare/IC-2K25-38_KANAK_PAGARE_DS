#include <iostream>
using namespace std;
int firstOccurence( int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int ans = -1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==target){
            ans = mid;
            end = mid-1; // search in the left side of the array
        }
        else if(arr[mid]< target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int lastOccurence( int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int ans = -1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==target){
            ans = mid;
            start = mid+1; // search on the right side of the array
        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1,4,8,8,9,17};
    int n = 6;
    int target = 8;
    int first = firstOccurence( arr, n,target);
    int last = lastOccurence( arr, n, target);
    
    cout<<"firstOccurence : "<<first<<endl;
    cout<<"lastOccurence : "<<last<<endl;

    return 0;
}
