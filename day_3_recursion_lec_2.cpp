//
// Created by bharat on 17-02-2024.
//
#include <bits/stdc++.h>
using namespace  std;
//factorial of a number
int factorial (int n ){
    if (n <= 1 ) return 1;
    else
        return  n * factorial(n-1);
}
// sum of n natural numbers
int sumof(int n ){
    if (n == 0 ) return n ;
    else
        return n + sumof(n-1) ;
}
// power of any number
int power(int num , int n){
    if ( n == 1 ) return num ;
    else
        return num* power(num , n-1);
}
int main (){
//    cout << factorial(0) << endl;
//cout << sumof(3) << endl;
cout << power(2, 3) << endl;
    return 0 ;
}