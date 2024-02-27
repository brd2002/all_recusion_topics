//
// Created by bharat on 27-02-2024.
//
#include <bits/stdc++.h>
using namespace  std;
void selectionSort(vector<int>&arr){
    for (int i = 0 ; i < arr.size()-1 ; i++){
        int index = i ;
        for (int j = i + 1 ; j < arr.size() ; j++){
            if (arr[j] < arr[index]){
                index = j ;
            }
        }
        swap(arr[i] , arr[index]);
    }
}
void bubbleSort(vector<int>&arr){
    for (int i = 0 ; i < arr.size()-1 ; i++){
        for (int j = 0 ; j < arr.size()-i-1 ; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}
int main (){
    vector<int>arr{6,5,4,3,2,1} ;
//    selectionSort(arr) ;
    bubbleSort(arr);
    for (auto x : arr){
        cout << x << endl;
    }
    return 0 ;
}