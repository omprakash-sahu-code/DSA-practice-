#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string reverseWords(string s) {
    reverse(s.begin(), s.end());
    string ans="";
    for (int i = 0; i < s.length(); i++){
        string word="";
        while(i< s.length() && s[i]!=' '){
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0) ans+= word + " "; 
    }
    return ans;
    
}

int main() {
    string str = " hello world ";
    cout << reverseWords(str);
    return 0;
}