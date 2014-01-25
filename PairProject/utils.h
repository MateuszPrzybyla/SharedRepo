#include <iostream>
#include <vector>

void printVector( std::vector<double> v )
{
	for( auto it = v.begin(); it != v.end(); it++ )
		std::cout << *it << " ";
	std::cout << std::endl;
}

double sumNumbersInVector( std::vector<double> v )
{
	double d = 0.;
	for( auto it = v.begin(); it != v.end(); it++ )
		d += *it;
	return d;
}