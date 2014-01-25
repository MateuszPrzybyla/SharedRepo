#include <iostream>
#include <vector>

void printVector( std::vector<double> v )
{
	for( auto it = v.begin(); it != v.end(); it++ )
		std::cout << *it << " ";
	std::cout << std::endl;
}