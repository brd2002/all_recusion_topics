#include <bits/stdc++.h>
using namespace std;
class Student
{   
    public:
    string name;
    int rollNo;
    int age;
    string grade;
    // setter 
    void setName (string name){
        this->name = name; 
    }
    void setRollNo(int rollNo){
        this->rollNo = rollNo;
    }
    void setAge(int age){
        this->age = age;
    }
    void setGrade(string grade){
        this->grade = grade;
    }
};
int main()
{
    Student s1;
    s1.age = 0 ;
    cout << s1.age << endl;
     return 0;
}