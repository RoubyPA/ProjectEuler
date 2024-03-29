/* Project Euler
   Probleme n°1

   If we list all the natural numbers below 10 that are multiples of 3
   or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

   Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>
#include <stdlib.h>

int
main()
{
  long int sum 	= 0;

  /*@ loop assigns i, sum;
    @ loop invariant 0 <= i <= 1000;
    @ loop invariant 0 <= sum <= i*i;
    @ */
  for (int i = 0 ; i < 1000 ; i++)
    {
      if( (i%3 == 0) || (i%5 == 0) )
        {
          sum = sum + i;
          //printf("i = %d\t", i);
        }
    }

#ifdef PROOF_ASSUMES // Ingnore this line in frama-c
  printf("\nsum = %ld\n", sum);
#endif

  return EXIT_SUCCESS;
}
