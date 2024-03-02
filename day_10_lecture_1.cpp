//
// Created by bharat on 24-02-2024.
//
#include <bits/stdc++.h>
using namespace  std;
int firstIndex (vector<int>&arr , int x ){
    int first = -1 , start = 0 , end = arr.size()-1 ;
    while (start <= end){
        int mid = start + (end - start)/2 ;
        if (arr[mid] == x ){
            first = mid ;
            end = mid-1 ;
        }else if (arr[mid] > x ){
            end = mid -1 ;
        }else {
            start = mid +1 ;
        }
    }
    return first ;
}
int lastIndex (vector<int>&arr , int x ){
    int last = -1 , start = 0 , end = arr.size() -1 ;
    while (start <= end){
        int mid = start + (end - start)/2 ;
        if (arr[mid] == x ){
            last = mid ;
            start = mid +1 ;
        }else if (arr[mid] > x ){
            end = mid-1 ;
        }else {
            start = mid +1 ;
        }
    }
    return last ;

}
vector<int>findFirstandLastIndex (vector<int>&arr , int x ){
    int firstindex = firstIndex(arr ,x );
    int lastindex = lastIndex(arr ,x );
    vector<int>ans;
    ans.push_back(firstindex) ;
    ans.push_back(lastindex);
    return ans;
}
bool check_elements(int arr[], int n, int A, int B)
{
    // Your code goes here
    int totalNumbercount = B-A+1 ;
    set<int>s;
    int count = 0 ;
    for (int i = 0 ; i < n ;i++){
        if (arr[i] >= A && arr[i] <= B){
            s.insert(arr[i]);
        }
    }
    int len = s.size() ;
    return totalNumbercount == len ;
}

//int lastIndex(string s)
//{
////    int last = -1 , start=  0 , end = s.length()-1 ;
////    while (start <= end){
////        int mid = start + (end-start)/2 ;
////        if (s[mid] == '1') {
////            last = mid ;
////            start = mid +1 ;
////        }else if (s[mid] == '0'){
////            start = mid+1;
////        }
////
////    }
////    return last;
//int upperbound = upper_bound(s.begin() , s.end() , '1')-s.begin();
//if (upperbound == s.length()) return -1 ;
//else
//    return upperbound;
//
//}
int lastIndex(string s)
{
    int n = s.length();
    int count1 = count(s.begin() , s.end() , '1');
    for (int i = 0 ; i < n  ;i++){
        if ((s[i] == '1' )){
            count1-- ;
            if (count1== 0){
                return i ;
            }
        }
    }
    return -1;
}
int searchInsertPosition(vector<int>&arr , int target){
    int position = arr.size() ;
    int start = 0 , end = arr.size() -1 ;
    while (start <= end){
        int mid = start + (end -start)/2 ;
        if (arr[mid] == target) return mid ;
        else if (arr[mid] < target ){
                start = mid +1 ;
        }else {
            position = mid ;
            end = mid -1;
        }
    }
    return position ;
}
int sqrtofX(int x){
    int first = 1 , last = x , ans = 1 ;
    while (first <= last){
        int mid = first + (last-first)/2 ;
        if (mid == x/mid ){ // for avoid integer overflow
            return mid ;
        }else if (mid> x/mid ){
            last = mid-1;
        }else {
            ans = mid ;
            first= mid +1;
        }
    }
    return ans ;
}
int findPeakElement(vector<int>&arr){
    int start = 0  , end = arr.size()-1;
    while (start <= end){
        int mid = start + (end -start )/2;
        if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
            return mid ;
        else if (arr[mid] > arr[mid-1]) {
            start = mid+1 ;
        }else {
            end = mid-1;
        }
    }
    return -1;
}
int findMinRotatedArray(vector<int>&arr , int target){
    int ans = arr[0] , start = 0 , end = arr.size()-1 ;
    while (start <= end){
        int mid = start + (end-start )/2;
        // left side sorted array
        if (arr[mid] >= arr[0]){
            start = mid+1;
        }
        // right side sorted array
        else {
            ans = arr[mid] ;
            end = mid-1;
        }
    }
    return ans ;
}
int searchInRotatedArray(vector<int>&arr , int target){
    int  start = 0 , end = arr.size()-1;
    while (start <= end){
        int mid = start + (end - start)/2 ;
        if (arr[mid] == target) return  mid ;
        else if (arr[0] <= arr[mid]){
            if (arr[start] <= target  && arr[mid] >= target){
                end = mid-1 ;
            }else {
                start = mid +1 ;
            }
        }else{
            if (arr[mid] <= target && arr[end] >= target){
                start = mid+1 ;
            }else {
                end = mid -1 ;
            }
        }
    }
    return -1 ;
}
int main (){

    cout << sqrtofX(65) << endl;
    return 0 ;
}