/* Exercise 2-1:(page 36) Write a program to determine the range of char, short, int and long variables. both signed and unsigned*/

#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[])
{
	/*
	// signed Types
	printf("signed char min = %d\n", SCHAR_MIN);
	printf("signed char max = %d\n", SCHAR_MAX);
	printf("signed short min = %d\n", SHRT_MIN);
	printf("signed short max = %d\n", SHRT_MAX);
	printf("signed int min= %d\n", INT_MIN);
	printf("signed int max= %d\n", INT_MAX);
	printf("signed long min= %ld\n", LONG_MIN);
	printf("signed long max= %ld\n", LONG_MAX);

	// unsigned types
	printf("unsigned char max = %u\n", UCHAR_MAX);
	printf("unsigned short max = %u\n", USHRT_MAX);
	printf("unsigned int max = %u\n", UINT_MAX);
	printf("unsigned long max = %lu\n", ULONG_MAX);
	*/


	printf("signed char min = %d\n", -(char)((unsigned char)~0 >> 1));
	printf("signed char max = %d\n", (char)((unsigned char)~0 >> 1));
	printf("signed short min = %d\n", -(short)((unsigned short)~0 >> 1 ));
	printf("signed short max = %d\n", (short)((unsigned short)~0 >> 1));
	printf("signed int min= %d\n", -(int)((unsigned int)~0 >> 1));
	printf("signed int max= %d\n", (int)((unsigned int)~0 >> 1));
	printf("signed long min= %ld\n", -(long)((unsigned long)~0 >> 1));
	printf("signed long max= %ld\n", (long)((unsigned long)~0 >> 1));
	// unsigned types
	printf("unsigned char max = %u\n", (unsigned char)~0);
	printf("unsigned short max = %u\n", (unsigned short)~0);
	printf("unsigned int max = %u\n", (unsigned int)~0);
	printf("unsigned long max = %lu\n", (unsigned long)~0);

	return 0;

}
/*
 * 	(char)((unsigned char)~0 >> 1)
 *	take a zero and converts each bit to one
 *	then converts the resulting quantity to an unsigned char
 *	(unsigned char)~0
 *	and shifts the unsigned char one position to the right to clear the sign bit
 *	(unsigned char)~0 >> 1
 *	and finally convert the quantity to char
 *	(char)((unsigned char)~0 >> 1)
 *	that is the maximum value for a signed character.
 * */


