#include <vector>
#include <iostream>
#include <iterator>

int main()
{
    std::size_t size{}; // Here we use 'std::size_t' instead of 'int'
                        // because an array size cannot be negative
    std::cin >> size;
    std::vector<int> vect(size);
    for (std::size_t i{}; i < size; ++i)
    	std::cin >> vect[i];

   

    for (auto rit = vect.rbegin(); rit != vect.rend(); ++rit)
        std::cout << *rit << ' ';
    std::cout << std::endl;
    return 0;
}