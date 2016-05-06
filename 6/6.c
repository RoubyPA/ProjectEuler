/*	Project Euler
	Probleme n°6

	The sum of the squares of the first ten natural numbers is,
		1^2 + 2^2 + ... + 10^2 = 385

	The square of the sum of the first ten natural numbers is,
		(1 + 2 + ... + 10)^2 = 55^2 = 3025

	Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

	Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
)

*/

#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	unsigned long 	sumSquares = 0,
						squaresSum = 0 ;

	for (int i = 1 ; i <= 100 ; i++)
	{
		sumSquares += i*i ;
		squaresSum += i ;
	}

	squaresSum = squaresSum*squaresSum ;

	printf("result = %ld\n", squaresSum - sumSquares) ;

	return EXIT_SUCCESS ;
}
