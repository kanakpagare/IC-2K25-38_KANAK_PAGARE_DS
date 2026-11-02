#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool areanagrams( string&s1,string&s2){
    if( s1.length() != s2.length()){
        return false;
    } 
    // sort both strings 
    sort( s1.begin(), s1.end());
    sort( s2.begin(), s2.end());
    //compare sorted strings 
    return( s1==s2);
}
int main() {
string s1 = "avani";
string s2 = "inava";
if( areanagrams( s1, s2)){
    cout<< "true"<< endl;
}
else {
    cout<< "false"<< endl;
}
return 0;
}
