#include <iostream>
#include <math.h>

#include "composite.hh"
using namespace::std;

void Composite::getFactors(Factorize *test)
{
	/* find factors of number */	
	test->factor();

	return;
}

void Composite::isHighlyComposite()
{
	isHCN_ = true;
	Factorize test, input;

	/* find input number's factors */
	input.num = inputNum; 
	getFactors(&input);

	for (long i = input.num-1; i >= 0; i--)
	{
		test.num = i;
		getFactors(&test);
		if (test.getNumFactors() >= input.getNumFactors())
		{
			isHCN_  = false;
			testNum = i;
			break;
		}
	}
	if (isHCN_ == true) input.printFactors();

	return;
}

void Composite::notHCN()
{
	cout << "Sorry, that's not a highly composite number..." << endl;
	cout << "Even " << testNum << " has more factors!" << endl;
}

void Composite::checkHCN()
{

	if (inputNum == 0 || inputNum == 1)
	{
		cout << "Come on... That's kind of like cheating." << endl;
		return;
	}

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


