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
    if (index == s.length())
        return 0;
    if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u')
    {
        return 1 + countVowel(s, index + 1);
    }
    else
    {
        return countVowel(s, index + 1);
    }
}
void reverseString(string &s, int start, int end)
{
    if (start >= end)
        return;
    swap(s[start], s[end]);
    reverseString(s, start + 1, end - 1);
}
int linearSearch(vector<int> &arr, int x, int index)
{
    if (index == arr.size())
        return -1;
    if (arr[index] == x)
        return index;
    return linearSearch(arr, x, index + 1);
}
int binarySearch(vector<int> &arr, int start, int end, int x)
{
    if (start > end)
        return -1;
    int mid = start + (end - start) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
    {
        return binarySearch(arr, start, mid - 1, x);
    }
    else
        return binarySearch(arr, mid + 1, end, x);
}
void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp(end - start + 1);
    int left = start, right = mid + 1, index = 0;
    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            index++;
            left++;
        }
        else
        {
            temp[index] = arr[right];
            index++;
            right++;
        }
    }

    while (left <= mid)
    {
        temp[index] = arr[left];
        index++;
        left++;
    }
    while (right <= end)
    {
        temp[index] = arr[right];
        index++;
        right++;
    }
    int index = 0;
    while (start <= end)
    {
        arr[start] = temp [index] ;
        start++ ;
        index++;
    }
}
void margesort(vector<int> &arr, int start, int end)
{
    if (start ==  end)
        return;
    int mid = start + (end - start) / 2;
    margesort(arr, start, mid);
    margesort(arr, mid + 1, end);
    merge(arr, start, mid, end);
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
    vector<int> arr{1, 2, 3, 4, 5, 10};
    int x = 10;
    cout << linearSearch(arr, x, 0);
}