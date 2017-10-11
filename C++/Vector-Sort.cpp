#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n, i;
    cin >> n;
    vector<int> arr(n); //create an empty vector of integers array n
    for(i=0; i<n; i++)

        cin>> arr[i]; //Put integer into the array
    sort(arr.begin() ,arr.end()); // sort the array 

    for(i=0; i<n; i++)
        std::cout << arr[i]<<" "; //output sorted array
    
    return 0;

  }