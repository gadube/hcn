#include <math.h>
#include <iostream>

class Factorize
{
	public:
		void factor(long num);
	private:
		void printFactors(long num,long *factors);
		void findFactors(long num,long *factors);

};
