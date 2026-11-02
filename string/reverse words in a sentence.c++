#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 
void reversewordsinsentence(string &s ){
     int start = 0;
     for( int i = 0; i<=s.length(); i++){
         if( s[i] == ' ' || s[i] == '\0'){
             reverse( s.begin()+ start, s.end()+ i);
             start = i+ 1;
             
         }
     }
     cout<< " reverse string is  : "<< s;
}
    
int main() {
    // Write C++ code here
     string s;
     cout<<" enter a sentence : ";
     getline( cin, s);
     
     reversewordsinsentence(s);

    return 0;

}
