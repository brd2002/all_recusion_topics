#include<bits/stdc++.h>
using namespace std;
int *solve (){
    int a = 5 ; 
    int *b = &a;
    return b;
}
int main(){
    // cout << *solve() << endl;
    // string s = "hello";
    // int a = 10;
    // cout << s.length() << endl;
    // cout << max(s.length(), a) << endl;
    string s = "bharat" ;
    string b = "bh";
    size_t index = s.find(b) ;
    cout << index  ;
    return 0;
}