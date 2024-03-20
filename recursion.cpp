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
    index = 0;
    while (start <= end)
    {
        arr[start] = temp[index];
        start++;
        index++;
    }
}
void margesort(vector<int> &arr, int start, int end)
{
    if (start == end)
        return;
    int mid = start + (end - start) / 2;
    margesort(arr, start, mid);
    margesort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}
int partition(vector<int> &arr, int start, int end)
{
    int pos = start;
    for (int i = start; i <= end; i++)
    {
        if (arr[i] <= arr[end])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos - 1;
}

void quicksort(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return;
    int pos = partition(arr, start, end);
    quicksort(arr, start, pos - 1);
    quicksort(arr, pos + 1, end);
}

void printArray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void printAllsubSequences(string &s, int index, string &output)
{
    if (index == s.length())
    {
        cout << output << endl;
        return;
    }
    printAllsubSequences(s, index + 1, output);
    output += s[index];
    printAllsubSequences(s, index + 1, output);
    output.pop_back();
}
void generateAllsubSequences(int n, int left, int right, string &output)
{
    if (left + right == 2 * n)
    {
        cout << output << endl;
        return;
    }
    if (left < n)
    {
        output.push_back('(');
        generateAllsubSequences(n, left + 1, right, output);
        output.pop_back();
    }
    if (right < left)
    {
        output.push_back(')');
        generateAllsubSequences(n, left, right + 1, output);
        output.pop_back();
    }
}
void printsubsetsum(vector<int> &arr, int index, int sum, vector<int> &allsum)
{
    if (index == arr.size())
    {
        allsum.push_back(sum);
        return;
    }
    // le lu
    sum += arr[index];
    printsubsetsum(arr, index + 1, sum, allsum);
    sum -= arr[index];
    // na lu
    printsubsetsum(arr, index + 1, sum, allsum);
}
bool targetsum(vector<int> &arr, int index, int sum)
{
    
    
    if (sum == 0)
        return true;
    if (sum  < 0 || index == arr.size())
        return false;
    return targetsum(arr  , index+1 , sum - arr[index]) || targetsum(arr  , index+1 , sum) ; 
}
    int countperfectsum (int arr[] , int index , int n ,int sum){
        if (index == n ){
            if (sum == 0 ) return 1; 
            else 
            return 0 ;
        }
        return countperfectsum(arr , index+1 , n , sum-arr[index]) + 
        countperfectsum(arr, index+1 , n , sum) ;
    }
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        return countperfectsum(arr , 0 , n , sum ) ;
        
	}
	  
int main()
{

    // vector<int> arr{3, 4, 5};
    // int sum = 0;
    // vector<int> allsum;
    // printsubsetsum(arr, 0, sum, allsum);
    // for (auto x : allsum)
    // {
    //     cout << x << endl;
    // }
    vector<int>arr {1,2,3} ;
    int sum = 10  ; 
    cout << targetsum(arr , 0 , sum ) << endl;
}