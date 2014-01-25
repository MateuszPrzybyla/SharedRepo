#include <vector>
double max(std::vector<double> v){
	double result = v[0];
	for( auto it = v.begin() ; it != v.end() ; it++ ){
		if( result < *it )
			result = *it;
	}
	return result;
}
