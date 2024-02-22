//
// Created by bharat on 22-02-2024.
//
#include <bits/stdc++.h>
using namespace std;
int findMissing(int arr[], int n) {
    // code here
//    (n/2)[2a - (n-1)d]
    long long int sum = 0 ;
    for (int i = 0 ; i < n; i++){
        sum += arr[i];
    }
    sort(arr , arr+n);
    int d = ( arr[n-1] - arr[0]) / n ;
    long long int total_sum =(n/2)*((2*arr[0]) - ((n-1)*d));
    return total_sum - sum ;
}
int main (){
    return 0 ;
}