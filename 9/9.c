/* Project Euler
	Probleme n°9

	A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
	a^2 + b^2 = c^2

	For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

	There exists exactly one Pythagorean triplet for which a + b + c = 1000.
	Find the product abc.

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/*#define RESULT_ABC 1000
*/
int
main(int arc, char **argv)
{
	long 	a = 1,
			b = 1,
			c = 0 ;
	float	result = 0.0 ;
	bool	findResult = false ;

	while (a < 1000 && !findResult)
	{
		b = a ;
		while (b < 1000 && !findResult)
		{
			c = a*a ;
			c = c + b*b ;
			//result = a + b + sqrtf((float)c) ;

			if (a < b && b < c)
			{
				result = a + b + sqrtf((float)c) ;
				if (result == 1000)
				{
					findResult = true ;
				}
			}

			b++ ;
		}

		a++ ;
	}

	printf("a = %ld, b = %ld, c = %.3f\na+b+c = %.2f\n", --a, --b, sqrtf((float)c), result) ;

	return EXIT_SUCCESS ;
}
