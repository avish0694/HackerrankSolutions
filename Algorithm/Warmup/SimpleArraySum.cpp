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
    long long int Arr[100000], sum = 0;

    int n; 

    cin >> n;


    for (int i = 0; i < n; ++i)
    {
        cin >> Arr[i];

        sum += Arr[i];

    }


    std::cout << sum <<std::endl;



    return 0;
}