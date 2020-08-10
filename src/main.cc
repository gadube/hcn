#include <iostream>

#include "composite/composite.hh"

using namespace::std;

int main (int argc, char **argv)
{
	Composite number;
	number.num = atoi(argv[1]);
	number.inputNum = number.num;

	number.checkHCN();

	return 0;
}
