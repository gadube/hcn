#include <iostream>
#include <math.h>

#include "factorize.hh"

using namespace::std;

/**********************************************************************/
/*  Simple method to factorize a number                               */
/*                                                                    */
/**********************************************************************/
void Factorize::findFactors()
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
/* Find the total number of prime factors                             */
/*                                                                    */
/**********************************************************************/
void Factorize::sumPrimeFactors()
{
	numpFactors = 0;
	for(long i = 0; i < num; i++) numpFactors += factors[i];
	return;
}

/**********************************************************************/
/* Find the total number of factors and Prime factors                 */
/*                                                                    */
/**********************************************************************/
void Factorize::sumFactors()
{
	numFactors = 1;
	numpFactors = 0;
	for(long i = 0; i < num; i++)
	{
		numpFactors += factors[i];
		numFactors *= (factors[i] == 0) ? 1 : factors[i] + 1;
	}
	return;
}

/**********************************************************************/
/* Used to print out prime factors in exponential form                */
/*                                                                    */
/**********************************************************************/

void Factorize::printFactors()
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

	cout << "The number has " << numFactors << " factors" <<endl;
	cout << "The number has " << numpFactors << " prime factors" <<endl;
}

/**********************************************************************/

void Factorize::factor()
{
	factors = new long[num];
	findFactors();
	printFactors();
	
	return;
}

	
