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
    int N;

    cin >> N;


    for (int i = 1; i <= N; ++i)
    {
        for (int s = 0; s < N - i ; ++s) std::cout <<" ";
        for (int j = 0; j < i; ++j) std::cout <<"#";
        std::cout <<std::endl;
    }

    return 0;
}