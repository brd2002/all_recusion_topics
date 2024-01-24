#include<bits/stdc++.h>
using namespace std;
int *solve (){
    int a = 5 ; 
    int *b = &a;
    return b;
}
int main(){
    cout << *solve() << endl;
    return 0;
}