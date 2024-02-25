//
// Created by bhara on 25-02-2024.
//
#include <bits/stdc++.h>
using namespace std;
int kthMissingPossitiveNumber(vector<int>&arr , int k){
    int start = 0 , end = arr.size()-1 , ans = arr.size() ;
    while (start <= end){
        int mid = start + (end-start)/2 ;
        if (arr[mid]-mid-1 >= k){
            ans = mid ;
            end = mid-1 ;
        }else {
            start = mid+1 ;
        }
    }
    return ans + k ;
}
int bookAllocation(vector<int>&A, int B){
//    edge case
    if (B > A.size()) return -1 ;
    long long int end = 0 ;
    long long int  start ;
    for (int i = 0 ; i < A.size() ; i++){
        end += A[i];
    }
    long long int  maxelement = *max_element (A.begin() , A.end());
    start = maxelement ;
    long long int mid , ans = INT_MAX;
    while (start <= end){
        mid = start + (end-start)/2;
        long long int page = 0 , count = 1 ;
        for (int i = 0 ; i < A.size() ; i++){
            page += A[i] ;
            if (page > mid) {
                count++;
                page = A[i];
            }
        }
        if (count <= B){
            ans = mid ;
            end = mid -1 ;
        }else {
            start = mid +1 ;
        }
    }
    return ans;
}
long long int floorSqrt(long long int x)
{
    // Your code goes here
    if (x < 2) return x ;
    long long int  start = 1 , end = x  ,  ans =1  ;
    while (start <= end){
        long long int mid  = start + (end-start)/2;
        if (mid == x / mid) return mid ;
        else if (mid > x / mid) {
            end = mid -1 ;
        }else {
            ans = mid ;
            start = mid +1 ;
        }
    }
    return ans ;
}
int books(int* A, int n1, int B) {
    if (B > n1) return -1 ;
    long long int end = 0 ;
    long long int  start = A[0] ;
    end += A[0];
    for (int i = 1; i < n1 ; i++ ){
        if (A[i] > start){
            start = A[i];
        }
        end += A[i];
    }
    long long int mid , ans = -1 ;
    while (start <= end){
        mid = start + (end-start)/2;
        int page = 0 , count = 0 ;
        for (int i = 0 ; i < n1 ; i++){
            page += A[i] ;
            if (page > mid) {
                count++;
                page = A[i];
            }
        }
        if (count <= B){
            ans = mid ;
            end = mid -1 ;
        }else {
            start = mid +1 ;
        }
    }
    return ans;

}
int main (){
//    A = [12, 34, 67, 90]
//    B = 2
    vector<int>arr {12 ,34  , 67 , 90 } ;
//    cout << kthMissingPossitiveNumber(arr , 1 ) << endl;
    cout << bookAllocation(arr , 2)  << endl;
    return 0 ;
}