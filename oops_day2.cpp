//
// Created by bhara on 13-02-2024.
//
#include <bits/stdc++.h>
using namespace  std;
class Coustomer{
public:
    string name ;
    int account_number;
    int balence ;

    Coustomer(){
        cout << "constructor is called" << endl;
    }
    // copy constructor
    Coustomer(Coustomer &b){
        this->balence = b.balence;
        this->account_number = b.account_number;
        this->name = b.name ;
    }
    // parameterize constructor
//    Coustomer(string name , int account_number , int balence){
//        this->name = name ;
//        this->account_number = account_number ;
//        this->balence = balence;
//    }
    // inline constructor
    inline Coustomer(string a, int b ,int c) : name(a)  , account_number(b) , balence(c){

    };
    void display(){
        cout << "name of customer is :: " << this->name << endl;
        cout << "account number is :: " << this->account_number << endl;
        cout << "account balence have :: " << this->balence << endl;
    }
//    if you make dynamically  object then you can call the destructor manually
    ~Coustomer(){
        cout << "destructor called" << endl;
    }
};
int main (){
    Coustomer a1("bharat" , 1234 , 2000);
   Coustomer a2 ("anusri" , 1234 , 4000);
    a2.display();
    a1.display();
    return 0 ;
}