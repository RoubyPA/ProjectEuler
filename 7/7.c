/*	Project Euler
	Probleme n°6

	By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

	What is the 10 001st prime number?

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int
main(int argc, char *argv[])
{
	int 	primeCount	= 0,
			i 				= 2,
			prime 		= 0;
	bool 	isPrime ;


	while (primeCount != 10001)
	{
		isPrime = true ;

		if (i%i == 0)
		{
			for (int j = 2 ; j < i ; j++)
			{
				if (i%j == 0)
					isPrime = false ; /* is non prime number*/
			}
/*			if isPrime == true*/
			if (isPrime)
			{
				primeCount++ ;
				prime = i ;
			}
		}
		i++ ;
	}

	printf("10001st prime number = %d\n", prime) ;

	return EXIT_SUCCESS ;
}
