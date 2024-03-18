#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int nthstair(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return nthstair(n - 1) + nthstair(n - 2);
}
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int maxelement(vector<int> &arr, int index)
{
    if (index == arr.size() - 1)
    {
        return arr[index];
    }
    return max(arr[index], maxelement(arr, index + 1));
}
bool checkPalindrom(string &s, int start, int end)
{
    if (start >= end)
        return true;
    else if (s[start] != s[end])
        return false;
    return checkPalindrom(s, start + 1, end - 1);
}
int countVowel(string &s, int index)
{
    if (index == s.length()) return 0 ;
    if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u')
    {
        return 1 + countVowel(s, index + 1);
    }
    else {
        return countVowel(s , index+1);
    }
}
void  reverseString(string &s, int start, int end)
{
    if (start >= end)
        return ;
    swap(s[start] , s[end]);
    reverseString(s , start+1 , end-1);
}
int linearSearch(vector<int>&arr , int x , int index ){
    if (index == arr.size()) return -1;
    if (arr[index] == x ) return index ;
    return linearSearch(arr , x , index+1);
}
int binarySearch (vector<int>&arr , int start , int end , int x ){
    if (start > end) return -1 ;
    int mid = start + (end-start)/2;
    if (arr[mid] == x ) return mid ;
    else if (arr[mid] > x){
        return binarySearch(arr , start , mid-1 , x );
    }else 
    return binarySearch(arr , mid+1 , end , x ) ;
}
int main()
{
    // int result = fibonacci(1);
    // cout << result << endl;
    // cout << gcd(10, 4) << endl;
    // vector<int>arr {1,4,3,4,9,8,10};
    // cout << maxelement(arr , 0);
    string a = "bharat ruidas";
    // cout << checkPalindrom(a, 0, a.length() - 1);
    // cout << countVowel(a , 0) << endl;
    // reverseString(a , 0 , a.length()-1) ;
    // cout << a << endl;
    vector<int>arr{1,2,3,4,5,10} ;
    int x = 10 ; 
    cout << linearSearch(arr ,x , 0 );
}