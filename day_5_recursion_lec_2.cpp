//
// Created by bharat on 19-02-2024.
//
#include <bits/stdc++.h>
using namespace std;
bool checkPalindrom(string s , int start , int end){
    if (start >= end) return true;
    if (s[start] != s[end]) return false;
    return checkPalindrom(s , start+1 , end-1);
}
// count vowel in a lowercase string
int countVowel(string s , int index ){
    if (index == s.size()) return 0 ;
    if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' ||s[index] == 'o'
    || s[index] == 'u')
    return 1+  countVowel(s , index+1) ;
    else
        return 0 + countVowel(s , index+1);
}
void reverseString (string &s , int start , int end ){
    if (start >= end) return ;
    else
        swap(s[start] , s[end]);
    reverseString(s , start+1 , end-1);
}
int main (){
    string s = "bharat" ;
//    cout << checkPalindrom(s , 0 , s.length()-1) ;
//    cout << countVowel(s , 0  ) << endl;
    reverseString(s , 0 , s.length()-1);
    cout << s << endl;
    return 0 ;
}