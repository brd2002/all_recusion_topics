//
// Created by bhara on 22-02-2024.
//
#include <bits/stdc++.h>
using namespace  std;
bool check(vector<long long > A, vector<long long > B, int N) {
    //code here
//    sort(A.begin() , A.end());
//    sort(B.begin() , B.end());
//    for (int i = 0 ; i < A.size() ; i++){
//        if (A[i] != B[i]) return false;
//    }
//    return true;
map<long long int ,long long int >mp1 ;
map<long long int ,long long int >mp2 ;
for (int i = 0 ; i < A.size() ; i++){
    mp1[A[i]]++;
}
for (int i = 0 ; i < B.size() ; i++){
    mp2[B[i]]++;
}
for (auto x : mp1){
    if (mp2[x.first] != x.second) return false;
}
return true;
}
int main (){
    return 0 ;
}
