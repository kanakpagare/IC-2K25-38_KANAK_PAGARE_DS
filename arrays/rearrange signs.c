#include <iostream>
#include <vector>
using namespace std;
 void rearrangeAlternative( vector<int>& arr){
    vector<int> pos, neg;
    //step 1 is to seperate the positive and negative elements 
    for( int num : arr){
        if( num >= 0){
            pos.push_back(num);
        } else neg.push_back(num);
        }
        int i = 0, p = 0, n = 0;
        //step 2 is to alternate elements back into the original array
        while( p < pos.size() && n < neg.size()){
            if( i % 2 == 0){
                arr[i++] = pos[p++];
            } else {
                arr[i++]= neg[n++];
            }
        }
        //step 3 is to append remaining elements (if any)
        while( p < pos.size()) arr[i++]= pos[p++];
        while( n < neg.size()) arr[i++] = neg[n++];
    }
    int main(){
        vector<int> arr={ 1,2,3,-4,-1,4};
        rearrangeAlternative(arr);
        for( int x : arr)
            cout<< x<< " ";
        
        return 0;
    }
 
