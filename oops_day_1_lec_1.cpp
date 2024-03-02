//
// Created by bharat on 15-02-2024.
//
#include <bits/stdc++.h>
using namespace  std;
class  Human {
public:
    string religion;
    string color ;
    string name ;
    int age , weight;
};

class Student: public Human{
public:
    int roll_No , fees ;
    void fun (string a , int b ,int c ){
        this->name = a ;
        this->fees = b ;
        this->age = c ;
    }

};
int main (){
    Student bharat ;
    bharat.name = "Bharat ruidas";
    bharat.weight = 20;
    return 0 ;
}