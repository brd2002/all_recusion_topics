//
// Created by bharat on 15-02-2024.
//
#include <bits/stdc++.h>
using namespace std;
//class  Human {
//protected:
//    string name ;
//    int age ;
//
//public:
//    Human(string name , int age){
//        this->name = name ;
//        this->age = age;
//    }
//    void display(){
//        cout << "Age is " << age << endl;
//    }
//};
//
//class  Student : public Human {
//    int roll_number , fees ;
//public:
////    Student(string name , int age , int fees , int roll_number){
////        this->fees = fees ;
////        this->roll_number = roll_number;
////        this->name = name;
////        this->age = age;
////    }
//    Student(string name , int age , int fees , int roll_number): Human(name , age){
//        this->roll_number = roll_number;
//        this->fees = fees ;
//
//    }
//    void display(){
//    cout << "Name is " << name << endl ;
//    cout << "Age is " << age << endl;
//    cout << "total fees are : " << fees << endl;
//    cout << "roll No is : " << roll_number << endl;
//}
//};
class  Person {
public:
    string name;
    int age ;
};
class  Emplyoe : public  Person{
protected:
    int salary;
};
class Maneger : public Emplyoe{
protected:
    string department ;
public:
    Maneger(string name , int salary , string  department ){
        this->name = name ;
        this->salary = salary ;
        this->department = department;
    }
};
int main (){
    return 0 ;
}