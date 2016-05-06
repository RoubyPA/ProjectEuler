/*	Project Euler
	Probleme n°5

	2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

	What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_TEST 1000000000
#define MAX_DIV 20

int
main(int argc, char *argv[])
{
	unsigned long long 	cutNum 		= 0,
								testedNum 	= 0 ;
	short		testOK		= 0 ;
	double	num			= 0 ;


	for (unsigned long long i = 1 ; (i <= MAX_TEST) && (testOK < MAX_DIV) ; i++)
	{
		testOK = 0 ;
		//printf("%lld\n", i) ;

		for (int div = 1 ; div <= MAX_DIV ; div++)
		{
			num 		= (double)i/(double)div ;
			cutNum 	= i/div ;

			//printf("%d(%d) :\t%lf == %lld\n", div, testOK ,num, cutNum) ;

			if (num == (float)cutNum)
				testOK++ ;

		}

		if (testOK >= MAX_DIV-1)
			testedNum = i ;

	}

	printf("num = %lld\n", testedNum) ;

	return EXIT_SUCCESS ;
}
