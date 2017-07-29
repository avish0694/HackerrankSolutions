#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  string a, b;

  cin >> a >> b; //take two input a and b

  std::cout << a.length() <<' '<< b.length() <<std::endl; //getting the length of a and b

  std::cout << a + b <<std::endl; // concatenate a and b

  swap( a[0], b[0] ); //swapping first character of a and b
  std::cout << a << ' ' <<  b << endl;

  return 0;
}
