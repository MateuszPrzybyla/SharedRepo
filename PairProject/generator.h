#include <vector>
#include <stdlib.h>

std::vector<double> getRandomValues()
{
	std::vector<double> v;
	for( int i = 0; i < 10; i++ )
		v.push_back( ( rand() % 100000 ) / 1000. );
	return v;
}