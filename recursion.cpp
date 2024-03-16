#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if (n == 0 || n == 1) return n;
    else 
    return fibonacci(n-1)+fibonacci(n-2);
}
int nthstair(int n){
    if (n == 1 ) return 1;
    if (n == 2) return 2;
    return nthstair(n-1)+nthstair(n-2);
}
int gcd (int a, int b){
    if (b == 0 ){
        return a ;
    }
    return gcd(b , a%b) ;
}
int main (){
    // int result = fibonacci(1);
    // cout << result << endl;
    cout << gcd(10 , 4) << endl;
}