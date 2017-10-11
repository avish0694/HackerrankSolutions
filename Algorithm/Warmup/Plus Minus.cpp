#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <map>
#include <cstdio>
#include <vector>
#include <set>
#include <algorithm>
#include <sstream>
#include <queue>
#include <cctype>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <set>
#include <map>


using namespace std;

int main(int argc, char const *argv[])
{

    int N, negativeCount= 0, positiveCount =  0, zeroCount =  0;

    cin >> N;

    vector<int> arr(N);

    for(int arr_i = 0; arr_i < N; arr_i++)
    {

       cin >> arr[arr_i];

        if(arr[arr_i] > 0)

            positiveCount++;

        if(arr[arr_i] < 0)

            negativeCount++;

        if(arr[arr_i] == 0)

            zeroCount++;
        
    }
        cout<<setprecision(6)<<(float)positiveCount/N<<endl;
        cout<<setprecision(6)<<(float)negativeCount/N<<endl;
        cout<<setprecision(6)<<(float)zeroCount/N<<endl;

  
    return 0;
}