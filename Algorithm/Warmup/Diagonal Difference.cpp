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
int DiagonalDiff( vector< vector<int> > &a)
{
    int leftdiagonal = 0, rightdiagonal = 0;
    for(int i=0; i < a.size(); i++) leftdiagonal += a[i][i];  
    for(int i=a.size()-1, j = 0; i >= 0 && j < a.size(); i--, j++) rightdiagonal += a[i][j];
    return abs(leftdiagonal - rightdiagonal);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector< vector<int> > a(n,vector<int>(n));

    for(int a_i = 0; a_i < n; a_i++)
    {

       for(int a_j = 0; a_j < n; a_j++){
          cin >> a[a_i][a_j];

       }

        cout << DiagonalDiff(a);

    }
    return 0;
}