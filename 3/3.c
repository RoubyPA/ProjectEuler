/*	Project Euler
	Probleme n°3

		The prime factors of 13195 are 5, 7, 13 and 29.
		What is the largest prime factor of the number 600851475143 ?

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define NUMBER 600851475143
//#define NUMBER 13195

int
main(int argc, char *argv[])
{
	unsigned long 	i					= 2,
						j					= 2,
						largestPrime 	= 0 ;
	bool	isPrime = false ;

	for (i ; i*i < NUMBER ; i++)
	{
		if (NUMBER%i == 0)
		{
			isPrime = true ;
			j = 2 ;
			while (j < i)
			{
				//printf("%ld rest %ld = %ld\n", i, j, i%j) ;
				if (i%j == 0)
				{
					isPrime = false ;
				}
				j++ ;
			}
			if (isPrime)
			{
				largestPrime = i ;
				//printf("Prime Find !\n") ;
			}
		}
	}

	printf("Largest prime = %ld\n", largestPrime) ;

	return EXIT_SUCCESS ;
}
