/*	Project Euler
	Probleme n°10

	The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

	Find the sum of all the primes below two million.

*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 2000000

int
main(int argc, char **argv)
{
	unsigned long long 	sum 	= 0,
								i 		= 2,
								j 		= 0 ;
	bool isPrime = true ;

	while (i < MAX)
	{
		isPrime = true ;
		j = 2 ;
		while (j*2 < i && isPrime)
		{
			if (i%j == 0)
				isPrime = false ;

			j++ ;
		}

		if (isPrime)
		{
			//printf("%lld\n", i) ;
			sum += i ;
		}

		i++ ;
	}

	printf("sum = %lld\n", sum) ;
}
