#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
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
#include <limits>
#include <iomanip>
#include <stdlib.h>
#include <stack>
#include <assert.h>
#include <utility>
#include <cctype>
#include <set>
#include <stdexcept>


using namespace std;

/*

typedef long long ll;





#define rep(i,n) for(int i=0;i<n;i++)
#define ll  long long int
#define pi pair<ll,ll>
#define pii pair<ll,pi>
#define f first
#define mp make_pair
#define mod 1000000007
//#define s second
#define inpFile(f) freopen(f, "r", stdin)
#define outFile(f) freopen(f, "w", stdout)
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
#define foreach(it, ar) for ( typeof(ar.begin()) it = ar.begin(); it != ar.end(); it++ )
#define fill(ar, val) memset(ar, val, sizeof(ar))
#define PI 3.1415926535897932385
#define uint64 unsigned long long
#define int64 long long
#define all(ar) ar.begin(), ar.end()
#define pb push_back
#define ff first
#define ss second
#define bit(n) (1<<(n))
#define Last(i) ( i & -i )
#define INF 500000000
#define maxN 100010
#define sq(x) ((x) * (x))
//#define MAX(a, b) (((a) > (b)) ? (a) : (b)) 
//#define all(a) (a).begin(),(a).end()
#define NIL -1
#define MAX 100
//ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

*/


int get_reverse(int n) { // Returns reverse of an integer
    std::string s = std::to_string(n); // Convert integer to string
    std::reverse(s.begin(), s.end()); // Reverse the string
    int temp = std::stoi(s); // Convert string to integer
    return (n < 0) ? -temp : temp; // Handle negative numbers
}


int main(int argc, char const *argv[])
{
  long long i, j, k;

   int beauty = 0;

   cin >> i >> j >> k;

   for (int r = i; r <=j ; ++r)
   {
      long long w = get_reverse(r);

      long long u = abs(r - w); 

      if (u % k == 0) beauty++;
  }

   std::cout << beauty <<std::endl;
 
  return 0;
}








