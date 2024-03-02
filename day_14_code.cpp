//
// Created by bharat on 28-02-2024.
//
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr , int start , int mid , int end){
    vector<int>temp (end-start+1);
    int left = start , right = mid + 1 , index = 0 ;
    while (left <= mid && right <= end){
        if (arr[left] <= arr[right]){
            temp[index] = arr[left] ;
            index++ ;
            left++;
        }else {
            temp[index] = arr[right] ;
            index++;
            right++;
        }
    }
    while (left <= mid){
        temp[index] = arr[left];
        index++ ;
        left++;
    }
    while (right <= end){
        temp[index] = arr[right] ;
        index++;
        right++;
    }
    index = 0 ;
    while (start <= end){
        arr[start] = temp[index] ;
        start++;
        index++;
    }
}
void mergesort(vector<int>&arr , int start , int end){
    if (start == end ) return ;
    int mid = start + (end-start)/2;
    mergesort(arr , start , mid);
    mergesort(arr , mid+1 , end);
    merge(arr , start , mid , end);
}
// quick sort
int possiton(vector<int>&arr , int start , int end){
    int pos = start ;
    for (int i = start ; i <= end ; i++){
        if (arr[i] <= arr[end]){
            swap(arr[i] , arr[pos]);
            pos++;
        }
    }
    return pos-1 ;
}
void quicksort(vector<int>&arr , int start , int end){
    if (start >= end) return ;
    int pivot = possiton(arr , start , end);
    quicksort(arr , start , pivot-1) ;
    quicksort(arr , pivot+1 , end);
}
int main (){
    vector<int>arr{9,7,4,3,2,1};
    quicksort(arr , 0 , arr.size()-1) ;
    for (auto x : arr){
        cout << x << endl;
    }
}