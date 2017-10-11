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
    long long int a0, a1, a2;
    long long int b0, b1, b2;

    cin >> a0 >> a1 >> a2;
    cin >> b0 >> b1 >>b2;

    int a = 0, b = 0;

    if (a0 > b0)
         a++;
    if (a0 < b0)
        b++;

    if(a1>b1)
        a++;
    
    if(a1<b1)
        b++;

    if(a2 < b2)
        b++;
    if(a2 > b2)
        a++;
  


     cout<< a <<" "<< b;

    return 0;
}