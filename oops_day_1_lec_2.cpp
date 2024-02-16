//
// Created by bharat on 15-02-2024.
//
#include <bits/stdc++.h>
using namespace std;
string mostCommonWord(string paragraph, vector<string>& banned) {
    transform(paragraph.begin() , paragraph.end() , paragraph.begin() , ::tolower);
    vector<string>all_string ;

    string initial  = "";
    for (int i = 0 ; i < paragraph.length() ; i++){
        if (paragraph[i] == ' '){
            all_string.push_back(initial);
            initial  = "";
        }else{
            initial += paragraph[i];
        }
    }
    initial.pop_back();
    all_string.push_back(initial);
    unordered_map<string , int >count_string ;
    for (int i = 0 ; i < all_string.size() ;i++){
        count_string[all_string[i]]++;
    }
    set<string>s ;
    for (auto x : banned){
        s.insert(x);
    }
    int maxi = 0 ;
    string ans = "";
    for (auto x : count_string){
        if (s.find(x.first) == s.end()){
            if (maxi < x.second){
                ans = x.first;
            }
        }
    }
    return ans;
}
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