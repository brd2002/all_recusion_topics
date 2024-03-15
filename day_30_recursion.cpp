#include <bits/stdc++.h>
using namespace std;
void fun(int days){
    if (days == 0 ){
        cout << "Happy birthday" << endl;
        return ;
    }
    cout << days << " days are left for birthday." << endl;
    fun (days-1) ;
}
// print all even numbers
void printEvenUsingRecursion(int numbers){
    if (numbers == 0){
        cout << "even number " << numbers << endl;
        return;
    }
    printEvenUsingRecursion(numbers-1);
    if (numbers%2 == 0){
        cout << "even number " << numbers << endl;
    }
}
int main()
{
    // fun(10);
    printEvenUsingRecursion(10) ;
    return 0;
}