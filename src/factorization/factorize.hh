#include <math.h>
#include <iostream>

class Factorize
{
	public:
		long num;

		void factor();
		int getNumFactors() {return numFactors;}
		int getNumPrimeFactors() {return numpFactors;}
		void printFactors();

	private:
		long *factors;
		int numFactors;
		int numpFactors;

		void findFactors();
		void sumPrimeFactors();
		void sumFactors();
};
