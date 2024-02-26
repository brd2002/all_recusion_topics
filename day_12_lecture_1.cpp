//
// Created by bharat on 26-02-2024.
//
#include  <bits/stdc++.h >
using namespace std;
int solve(int n, int k, vector<int> &stalls) {

    // Write your code here
    sort(stalls.begin() , stalls.end()) ;
    int start = 1 , end = stalls[n-1] - stalls[0];
    int ans , mid ;
    while (start <= end){
        mid = start + (end-start)/2;
        int cows = 1 , position = stalls[0];
        for (int i = 1 ; i < n ; i++){
            if (stalls[i] >= position+mid){
                cows++;
                position = stalls[i] ;
            }
        }
        if (cows >= k ){
            ans = mid ;
            start = mid +1 ;
        }else {
            end = mid -1 ;
        }
    }
    return ans;
}
int minEatingSpeed(vector<int>& piles, int h) {
    long long int sum = 0 ;
    int end = *max_element(piles.begin() , piles.end());
    for (int i = 0 ; i < piles.size() ; i++){
        sum += piles[i];
    }
    int start = sum / h ;
    if (!start)
        start = 1 ;
    int ans , mid ;
    while (start <= end){
        mid = start + (end-start)/2 ;
        int hours = 0 ;
        for (int i = 0 ; i < piles.size() ; i++){
            hours += piles[i]/mid;
            if (piles[i]%mid != 0){
                hours++;
            }
        }
        if (hours <= h){
            ans = mid ;
            end = mid-1 ;
        }else {
            start = mid +1 ;
        }
    }
    return ans;
}
int main (){
    return 0 ;
}