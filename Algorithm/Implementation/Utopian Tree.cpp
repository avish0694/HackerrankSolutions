#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int utopian(int n){
    
    return ~(~1<<(n>>1)) << n%2;
}

int main() {
   int t, s;
    cin >>t;
    while(t--){
        cin >> s;
            
            cout << utopian(s)<<endl;
    }
}