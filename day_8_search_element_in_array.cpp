//
// Created by bharat on 22-02-2024.
//
#include <bits/stdc++.h>
using namespace std;
//Given an integer array and another integer element.
//The task is to find if the given element is present in array or not.
int search(int arr[], int N, int X)
{
    // Your code here
    for (int i = 0 ; i < N ; i++){
        if (arr[i] == X ) return i ;
    }
    return -1;
}
int main (){

}