#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int solve(int n, int p){

    int turnFront, turnBack;
    if(p%2==1)
        turnFront = (p-1)/2;
    else
        turnFront = p/2;
    
    if(n%2==1)
        turnBack = (n-p)/2;
    else{
        n++;
        turnBack = (n-p)/2;
    }
    
    return min(turnFront,turnBack);
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
