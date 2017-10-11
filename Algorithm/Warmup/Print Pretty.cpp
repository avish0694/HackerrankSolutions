#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
	int T; 

	std::cin >> T;
	std::cout << setiosflags(std::ios::uppercase);
	std::cout << setw(0xf) << internal;
	while(T--) {
		double A; std::cin >> A;
		double B; std::cin >> B;
		double C; std::cin >> C;

			std::cout << resetiosflags(std::ios::uppercase|std::ios::scientific);
			std::cout << std::setiosflags (std::ios::left|std::ios::fixed);
			std::cout << setw(0) << std::hex;
			std::cout << std::setiosflags (std::ios::showbase);
			std::cout << (unsigned long)A << std::endl;

			std::cout << resetiosflags(std::ios::showbase);
			std::cout << setw(0xf) << setfill('_')<< std::dec ;
			std::cout << setiosflags (std::ios::showpos) << std::setprecision(2);
			std::cout  << B << endl;

			std::cout << resetiosflags(std::ios::fixed|std::ios::showpos);
			std::cout << setiosflags (std::ios::scientific | std::ios::uppercase) << std::setprecision(9);
			std::cout << C << std::endl;

		}

 return 0;
}
