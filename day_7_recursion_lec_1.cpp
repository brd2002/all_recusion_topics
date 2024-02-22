//
// Created by bharat on 21-02-2024.
//
#include<bits/stdc++.h>
using namespace  std;
// sum of all elements in a vector
int sum (vector<int>&arr , int index){
    if (arr.size() == index) return 0 ;
    else
        return arr[index] + sum(arr , index+1);
}
int main (){
    vector<int>arr {1,2,3,4,5};
    cout << sum(arr , 0) << endl;
    return 0 ;
}