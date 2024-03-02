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
void insertionSort(vector<int>&arr){
//    for (int i = 1  ; i  < arr.size() ; i++){
//        for (int j = i ; j > 0 ; j--){
//            if (arr[j] < arr[j-1]){
//                swap(arr[j] , arr[j-1]);
//            }
//        }
//    }
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
bool areRotations(string s1,string s2)
{
    // Your code here
    for (int i = 0 ; i < s1.length() ; i++){
        string temp = s1 ;
        int rotatelen = i ;
        rotate(temp.begin() , temp.end()+rotatelen , temp.begin()) ;
        if (temp == s2) return true;
    }
    return false;
}
int main (){
    vector<int>arr{6,5,4,3,2,5,6,8,1} ;
//    selectionSort(arr) ;
//    insertionSort(arr);
//    for (auto x : arr){
//        cout << x << endl;
//    }
string s1 = "mightandmagic";
string s2 = "andmagicmigth";
//sort(s1.begin() , s1.end());
//sort(s2.begin() , s2.end()) ;
//cout << (s1==s2) << endl;
    rotate(s1.begin() , s1.end() + s1.length()  , s1.begin())
    return 0 ;
}