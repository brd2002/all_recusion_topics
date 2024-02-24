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
int lastIndex(string s)
{
//    int last = -1 , start=  0 , end = s.length()-1 ;
//    while (start <= end){
//        int mid = start + (end-start)/2 ;
//        if (s[mid] == '1') {
//            last = mid ;
//            start = mid +1 ;
//        }else if (s[mid] == '0'){
//            start = mid+1;
//        }
//
//    }
//    return last;
int upperbound = upper_bound(s.begin() , s.end() , '1')-s.begin();
if (upperbound == s.length()) return -1 ;
else
    return upperbound;

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

int main (){
    vector<int>arr {1,2,3,4,4,4,5};
    vector<int>ans = findFirstandLastIndex(arr , 4);
    for (auto x : ans){
        cout << x << endl;
    }
    return 0 ;
}