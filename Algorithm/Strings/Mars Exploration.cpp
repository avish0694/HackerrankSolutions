#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int SOS(string message)
{
	string sos = "SOS";

	int count = 0;

	for (int i = 0; i < message.length(); ++i)
	{
		if (message[i] != sos[i % 3]) count++;
	}

	return count;
}


int main(int argc, char const *argv[])
{

	string s;

	getline(cin, s);

	std::cout << SOS(s)<<std::endl;

	return 0;
}

