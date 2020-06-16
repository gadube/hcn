#include <math.h>
#include <iostream>

class Factorize
{
	public:
		long num;

		void factor();
		void printFactors();

	protected:
		long *factors;
		int numFactors;
		int numpFactors;

		void findFactors();
		void sumPrimeFactors();
		void sumFactors();
};
