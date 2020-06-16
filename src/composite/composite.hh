#include <iostream>
#include <math.h>

#include "factorize.hh"

class Composite : public Factorize
{
	public:
	void checkHCN();

	protected:


	private:
	void isHighlyComposite();

	char isHCN_;
};
