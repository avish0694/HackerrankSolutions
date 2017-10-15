
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

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
  int n,k;


  cin >> n >> k;

  std::vector<int> v(n);


  for (int w_i = 0; w_i < n; +w_i)
  {
    cin >> v[w_i];
   
  }

  int count = 0;

  for (int i = 0; i < n; ++i)
  {
    for (int j = i + 1; j < n ; ++j)
    {
       if((v[i] + v[j]) % k == 0) {
             count++;
       }
    }
  }

 cout << count <<std::endl;

  return 0;
}