#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    
   //initialising variables 
   char str[100] = "AvAni";
   int i;
   int freq[256] = {0};
   //calculating frequency of each character. 
   for(i = 0; str[i] !='\0'; i++){
    freq[str[i]]++;
   }
   cout<<"the non repeating characters are : ";
   for( i = 0; i< 256; i++){
    if( freq[i]==1){
        cout<<char(i)<<" ";

    }
   }

    return 0;
}
