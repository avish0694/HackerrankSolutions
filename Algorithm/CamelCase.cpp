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

#define rep(i,n) for(int i=0;i<n;i++)
#define ll  long long int
#define pi pair<ll,ll>
#define pii pair<ll,pi>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back

int main(int argc, char const *argv[])
{
  string str;
  int count = 1;

  cin >> str;

  int len = str.length();

  for (int i = 0; i < len; ++i)
  {
    if (str[i]>= 65 && str[i] <= 90)
      count++;
  }

  std::cout << count <<std::endl;
  return 0;
}