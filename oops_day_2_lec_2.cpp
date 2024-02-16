//
// Created by bharat on 16-02-2024.
//
#include <bits/stdc++.h>
using  namespace  std;
class Customer {
    string name ;
    int balance , account_number ;
public:
    Customer(string name , int balance , int account_number){
        this->name = name ;
        this->account_number = account_number ;
        this->balance = balance;
    }
    // deposit
    void deposit (int amount){

        if (amount > 0 ){
            cout << "success fully deposit" << endl;
        }else{
            throw "please give right amount ." ;
        }
    }
    // withdraw
    void withdraw (int amount ){
        if (this->balance >= amount){
            cout << "successfully withdraw" << endl;
        }else{
            throw "Not have enough money in balance ." ;
        }
    }
};
int main (){
    Customer c1 ("bharat" , 5000 , 1234);
    try {
            c1.deposit(-2025) ;
//        c1.withdraw(6000) ;
    }catch (const char* e ){
        cout << "Exception occured : " << e << endl;
    }
    return 0 ;
 }