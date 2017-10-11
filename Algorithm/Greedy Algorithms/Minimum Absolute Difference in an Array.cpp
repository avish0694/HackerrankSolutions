
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
#include <sstream>
#include <queue>
#include <cctype>
#include <cmath>
#include <fstream>
#include <array>
#include <climits>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, n, mx = INT_MAX;
    vector<int> ar;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        ar.push_back(a);
    }
    sort(ar.begin(),ar.end());
    for(int i = 0; i < ar.size() - 1; i++){
        if(ar[i+1]-ar[i] < mx)
         mx = ar[i+1]-ar[i];
    }
    cout << mx << endl;
    return 0;

}