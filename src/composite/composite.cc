#include <iostream>
#include <math.h>

#include "composite.hh"

void Composite::isHighlyComposite()
{
	/* find factors of number */	
	factors = new long[num];
	findFactors();


	return;
}
