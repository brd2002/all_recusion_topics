//
// Created by bharat on 19-02-2024.
//
#include <bits/stdc++.h>
using namespace std;
void printArray(vector<int>&arr , int index ){
    if (index == -1) return ;
    printArray(arr , index-1);
    cout << arr[index] << endl;
}
void printReverseArray(vector<int>&arr , int index ){
    if (index == -1) return ;
    cout << arr[index] << endl;
    printReverseArray(arr , index-1);
}
int main (){
vector<int>arr{ 1 ,2 ,3, 4 ,5, 6};
    printArray(arr , arr.size()-1) ;
    cout << "-------------" << endl;
    printReverseArray(arr , arr.size()-1) ;
    return 0 ;
}
