#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
  
    int N;
    cin>>N;	
    int *A = new int[N]; //dynamically allocating memory that adjusts its size according to the input during runtime
    int i=0;
    while(cin>>A[i++]);
    while(cout<<A[--N]<<' ' && N); //Reverse the array
    delete[] A; //  deallocate memory created by new
    return 0;

}