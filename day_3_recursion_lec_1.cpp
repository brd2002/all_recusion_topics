//
// Created by bharat on 17-02-2024.
//
#include <bits/stdc++.h>
using namespace  std;
void fun (int n ){
    if (n == 0 ) {
        cout << "Happy birthday" << endl;
        return ;
    }
    cout << n << " days left" << endl;
    fun(n-1);
}
int main (){
    fun(5);
    return 0 ;
}