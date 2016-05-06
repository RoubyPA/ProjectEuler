/*	Project Euler
	Probleme n°4

	A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

	Find the largest palindrome made from the product of two 3-digit numbers.

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*	Prototype	*/
bool isPalindrome(int number) ;

int
main(int argc, char *argv[])
{
	unsigned long 	palindrome	= 0 ;

	for (int i = 999 ; i > 99 ; i--)
	{
		for (int j = 999 ; j > 99 ; j--)
		{
			if (isPalindrome(i*j))
			{
				//printf("Palindrome = %ld\n", i*j) ;
				if (palindrome < i*j)
					palindrome = i*j ;
			}
		}
	}

	printf("Palindrome = %ld\n", palindrome) ;

	return EXIT_SUCCESS ;
}

bool
isPalindrome(int num)
{
	unsigned int reversed = 0;
	unsigned int original = num;

	if (num < 10)
		return true ;
	if (num % 10 == 0)
		return false ;

	while (num >= 1)
	{
		reversed = (reversed * 10) + (num % 10) ;
		num = num/10 ;
	}

	if (original == reversed)
		return true ;
	else
		return false ;
}
