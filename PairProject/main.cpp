#include "test.h"

int main()
{
	//testPrint();
	//testUtils();
	//testMax();
	std::vector<double> v;
	v = getRandomValues();

	double tab[3];
	tab[0] = min(v);
	tab[1] = max(v);
	tab[2] = sumNumbersInVector( v );
	for( int i = 0 ; i < 3 ; i++)
		std::cout << tab[i] << " ";

	system("pause");

	return 0;
}
