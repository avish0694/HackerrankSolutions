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
	int a;
    vector<long long int>v;
    cin >> a;

    long long int b;
    int q1,q2,q3;
    for(int i = 0; i < a; i++){
        cin >> b;
        v.push_back(b);
    }


    cin >> q1;
    cin >> q2;
    cin >> q3;


    
    v.erase(v.begin() + (q1 - 1));
    v.erase(v.begin() + (q2 - 1), v.begin() + (q3 - 1));


    cout << v.size() << endl;
    for(int c = 0;c < v.size(); c++){
        cout << v[c] << " ";
    }

	return 0;
}