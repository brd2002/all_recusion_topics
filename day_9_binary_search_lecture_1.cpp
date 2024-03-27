//
// Created by bharat on 23-02-2024.
//
#include <bits/stdc++.h>
using namespace  std;
int binarySearch(vector<int>&arr , int x ){
    int low = 0 , high = arr.size()-1;
    while (low <=  high ) {
        int mid = low + (high - low)/2 ;
        if (arr[mid] == x ) return mid ;

        else if (arr[mid] > x ) high = mid -1 ;
        else
            low = mid +1;
    }
    return -1;
}
int main (){
    vector<int>arr {1,2,3,4};
    int x = 4  ;
    cout << binarySearch(arr , x ) ;
    int a = 10 ;
    return 0 ;
}
