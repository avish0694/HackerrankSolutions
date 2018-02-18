#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main(int argc, char const *argv[])
{
  int t, num;

  cin >> t;

 for (int i = 0; i < t; ++i)
 {
    int count = 0;

    cin >> num;

    int r = num;

    while(r > 0){

    if(r % 10 != 0 && num % (r % 10) == 0) count++;

    r = r / 10;

    }

    std::cout <<count<<std::endl;

        
  }

  return 0;
}
