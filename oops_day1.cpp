#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    string name;
    int rollNo;
    int age;
    string grade;


    // setter
public:
    void setName(string name)
    {
        if (name.size() == 0){
            cout << "invalide name" << endl;
        }else{
             this->name = name;
        }
       
    }
    void setRollNo(int rollNo)
    {
        this->rollNo = rollNo;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setGrade(string grade)
    {
        this->grade = grade;
    }


    // getter 
    string getName (){
        return name;
    }
    int getRollNo(){
        return rollNo;
    }
    int getAge  (){
        return age;
    }
    string getGrade(){
        return grade;
    }
};
int main()
{
    Student s1;
    s1.setAge(12);
    s1.setGrade("A+");
    s1.setName("Bharat ruidas");
    cout << s1.getAge() << endl;
    return 0;
}