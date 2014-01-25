#include "utils.h"
#include <vector>

void testPrint()
{
	printVector( getRandomValues() );
}

void testUtils()
{
	std::vector<double> v = getRandomValues();
	printVector( v );
	std::cout << sumNumbersInVector( v );
}

void testMax(){
	std::vector<double> v = getRandomValues();
	std::cout << max(v);
}
