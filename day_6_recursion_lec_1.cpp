//
// Created by bharat on 20-02-2024.
//
#include <bits/stdc++.h>
using namespace  std;
// linear search using recursion
int  linearSearch (vector<int>&arr , int index , int x){
    if (index == arr.size()) return false;
    if (arr[index] == x ) return true;
    return linearSearch(arr , index+1 , x );
}
// binary search using recursion
//it's increasing order array
int  binarySearchIncreasing(vector<int>&arr, int start  , int end , int x ){
    if (start > end ) return -1 ;
    int mid = start + (end - start )/2;
    if (arr[mid] == x ) return mid ;
    else if (arr[mid] > x )
        return binarySearchIncreasing(arr , start , mid-1 , x ) ;
    else
        return binarySearchIncreasing(arr , mid+1 , end , x ) ;
}
int  binarySearchDecreasing(vector<int>&arr, int start , int end , int x ){
    if (start > end ) return -1 ;
    int mid = start + (end-start)/2;
    if (arr[mid] == x ) return mid ;
    else if (arr[mid] > x )
        return binarySearchDecreasing(arr , mid+1 , end ,x );
    else
        return binarySearchDecreasing(arr , start , mid-1  , x ) ;
}
int main (){
    vector<int>arr {1,2,3,4,5};
    vector<int>arr1{4,3,2,1};
    int x = 2;
    cout << binarySearchIncreasing(arr , 0 , arr.size()-1 , x ) << endl;
    cout << binarySearchDecreasing(arr1 , 0 , arr1.size()-1 , x ) << endl;
    return 0 ;
}