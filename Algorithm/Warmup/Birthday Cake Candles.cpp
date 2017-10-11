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
    int n, tmp;
   


    std::cin >>n;

     // store the current maximum height of any candle, 
    //initialize to the minimum possible height of any candle

        int MaxHeight = 1;

 // count the number of candles having the maximum height
        int CountMax = 0;


        for (int i = 0; i < n; ++i)
        {
            cin >> tmp;

            // if you read in a value larger than maxHeight, 
            //set new maxHeight

            if (tmp > MaxHeight)
            {
                MaxHeight = tmp;

                CountMax = 1;

            }else if(tmp == MaxHeight){

                CountMax++;
            }
            
        }

        std::cout <<CountMax <<std::endl;

    return 0;
}