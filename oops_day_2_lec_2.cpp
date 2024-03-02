//
// Created by bharat on 16-02-2024.
//
#include <bits/stdc++.h>
using  namespace  std;
//Given a string paragraph and a string array of the banned words banned,
//return the most frequent word that is not banned. It is guaranteed there is at least one word that is not banned,
//and that the answer is unique.

//The words in paragraph are case-insensitive and the answer should be returned in lowercase.
//Input: paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.", banned = ["hit"]
//Output: "ball"
string mostCommonWord(string paragraph, vector<string>& banned) {
    string initial = "";
    transform(paragraph.begin() , paragraph.end() , paragraph.begin() , ::tolower);
    vector<string > all_string ;
    for (int i = 0  ; i < paragraph.length() ; i++){
        if (isalpha(paragraph[i])){
            initial += paragraph[i] ;
        }else {
            all_string.push_back(initial);
            initial = "";
        }
    }
//    if(initial[initial.length()-1] == '.')
//    initial.pop_back();
    all_string.push_back(initial);
    map<string , int >map_of_string;
    for (int i = 0 ; i < all_string.size() ; i++){
        map_of_string[all_string[i]]++;
    }
    set<string>s ;
    for (auto x : banned){
        transform(x.begin() , x.end() , x.begin() , ::tolower);
        s.insert(x);
    }
    string ans = "" ;
    int len = INT_MIN ;
    for (auto x : map_of_string){
        if (s.find(x.first) == s.end()){
            if (x.first.length() != 0){
                if (x.second > len){
                    ans = x.first ;
                    len = x.second ;
                }
            }
        }
    }
    return ans;
}
//class Customer {
//    string name ;
//    int balance , account_number ;
//public:
//    Customer(string name , int balance , int account_number){
//        this->name = name ;
//        this->account_number = account_number ;
//        this->balance = balance;
//    }
//    // deposit
//    void deposit (int amount){
//
//        if (amount > 0 ){
//            cout << "success fully deposit" << endl;
//        }else{
//            throw "please give right amount ." ;
//        }
//    }
//    // withdraw
//    void withdraw (int amount ){
//        if (this->balance >= amount){
//            cout << "successfully withdraw" << endl;
//        }else{
//            throw "Not have enough money in balance ." ;
//        }
//    }
//};
int main (){

   string  paragraph = "Bob hit a ball, the hit BALL flew far after it was hit." ;
   vector<string>banned{ "hit"};
    cout << mostCommonWord(paragraph , banned)  << endl;

 }