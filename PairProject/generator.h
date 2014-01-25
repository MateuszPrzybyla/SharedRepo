#include <vector>
#include <stdlib.h>

std::vector<double> getRandomValues()
{
	std::vector<double> v;
	for( int i = 0; i < 100; i++ )
		v.push_back( rand() % 101 );
	return v;
}