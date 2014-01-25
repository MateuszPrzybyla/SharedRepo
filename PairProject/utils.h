#include <iostream>
#include <vector>

std::vector<double> getRandomValues()
{
	std::vector<double> v;
	for( int i = 0; i < 10; i++ )
		v.push_back( ( rand() % 100000 ) / 1000. );
	return v;
}

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

double max(std::vector<double> v){
	double result = v[0];
	for( auto it = v.begin() ; it != v.end() ; it++ ){
		if( result < *it )
			result = *it;
	}
	return result;
}

double min(std::vector<double> v){
	double result = v[0];
	for( auto it = v.begin() ; it != v.end() ; it++ ){
		if( result > *it )
			result = *it;
	}
	return result;
}