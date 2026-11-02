#include <iostream>
#include<string>
using namespace std;
  bool isStringPalindrome(string str){
        int start=0;
        int end= str.length()-1;
        while(start<end){
            if(str[start]!=str[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }


int main() {
    // Write C++ code here
   string word;
   cout << "enter a word: ";
   cin >> word;
   if (isStringPalindrome(word)){
    cout << word << " is a palindrome." << endl;
   } else{
    cout << word << " is not a palindrome." << endl;
   }
   
   

    return 0;
}
