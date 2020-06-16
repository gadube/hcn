#include <iostream>
#include "factorize.hh"

using namespace::std;


int main (int argv, char **argc)
{
	Factorize F;
	F.num = atoi(argc[1]);
	F.factor();

	return 0;
}
