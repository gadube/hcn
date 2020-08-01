#include <iostream>
#include <math.h>

#include "composite.hh"
using namespace::std;

void Composite::getFactors(Factorize *test)
{
	/* find factors of number */	
	factors = new long[test->num];
	test->findFactors();
	test->sumFactors();

	return;
}

void Composite::isHighlyComposite()
{
	isHCN_ = true;
	Factorize test, input;

	/* find input number's factors */
	input.num = inputNum;
	getFactors(&input);

	for (long i = 0; i < num; i++)
	{
		test.num = i;
		getFactors(&test);
		if (test.numFactors >= input.numFactors)
		{
			isHCN_  = false;
			testNum = i;
			break;
		}
	}

	return;
}

void Composite::notHCN()
{
	cout << "Sorry, that's not a highly composite number..." << endl;
	cout << "Even " << testNum << " has more factors!" << endl;
}

void Composite::checkHCN()
{

	isHighlyComposite();
	if (isHCN_ == false)
	{
		notHCN();
		return;
	}
	else
	{
		cout << "CONGRATS! You have found a highly composite number!" << endl;
		return;
	}
}


