#include "generator.h"
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