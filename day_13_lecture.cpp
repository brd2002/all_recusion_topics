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
int main (){
    vector<int>arr{1,3,2,4,5 ,4,6,7} ;
    selectionSort(arr) ;
    for (auto x : arr){
        cout << x << endl;
    }
    return 0 ;
}