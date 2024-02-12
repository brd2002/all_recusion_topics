#include<bits/stdc++.h>
using namespace std;
void rotateclockwise(string &s){

    char c = s[s.size()-1];
    int index = s.size()-2;
    while(index>=0){
        s[index+1] = s[index];
        index--;
    }
    s[0] = c;
}
int main(){
    // char arr[10];
    // cin>>arr;
    // cout<<arr;
    // string s = "bharat ruidas is \"good\" boy";
    string s = "\\0";
    cout << s ;
    return 0;
}