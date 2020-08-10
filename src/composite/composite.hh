#include <iostream>
#include <math.h>

#include "../factorization/factorize.hh"

class Composite : public Factorize
{
	public:
	void checkHCN();
	long inputNum,testNum;

	protected:


	private:
	void getFactors(Factorize *test);
	void isHighlyComposite();
	void notHCN();

	char isHCN_;
};
