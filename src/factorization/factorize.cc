#include <iostream>
#include <math.h>

#include "factorize.hh"

using namespace::std;

/**********************************************************************/
/*  Simple method to factorize a number                               */
/*                                                                    */
/**********************************************************************/
void Factorize::findFactors(long num,long *factors)
{
	long isFactor = 2;
	long i = num;
	while (i > 0)  
	{
		if (i % isFactor == 0)
		{
			factors[isFactor-1]++;
			i = (i/isFactor == 1)? 0: i / isFactor;
			isFactor = 2;
		}
		else isFactor++;
			
	}
}


/**********************************************************************/
/* Used to print out prime factors in exponential form                */
/*                                                                    */
/**********************************************************************/

void Factorize::printFactors(long num,long *factors)
{
	cout << "Prime factorization is: ";
	cout << num << " = ";

	for (long i = 0;i < num; i++)
	{
		if (factors[i] != 0)
		{
			cout<< i+1 <<"^"<< factors[i];
			for (long j = i + 1;j < num;j++)
			{
				if (factors[j] == 0) continue;
				else 
				{
					cout << " + ";
					break;
				}
			}
		}
	}
	cout << endl;
}

/**********************************************************************/

void Factorize::factor(long num)
{
	long *factors = new long[num];
	findFactors(num,factors);
	printFactors(num,factors);
	
	return;
}

	
