#include <stdio.h>
#include <limits.h>
#include <float.h>

void print_ranges(void); //print the ranges of every types on this mechine

int main(void)
{
	print_ranges();
	return 0;
}

void print_ranges(void)
{
	/*
	 * char
	 */
	//printf("CHAR_MAX: %c\n",CHAR_MAX);
	//printf("CHAR_MIN: %c\n",CHAR_MIN);
	printf("CHAR_MAX: %d\n",CHAR_MAX);
	printf("CHAR_MIN: %d\n",CHAR_MIN);

	/*
	 * int
	 */
	printf("\nINT_MAX: %d\n",INT_MAX);
	printf("INT_MIN: %d\n",INT_MIN);
	printf("UINT_MAX: %u\n",UINT_MAX);

	/*
	 * short
	 */
	printf("\nSHRT_MAX: %hd\n",SHRT_MAX);
	printf("SHRT_MIN: %hd\n",SHRT_MIN);
	printf("USHRT_MIN: %hu\n",USHRT_MAX);

	/*
	 * long
	 */
	printf("\nLONG_MAX: %ld\n",LONG_MAX);
	printf("LONG_MIN: %ld\n",LONG_MIN);
	printf("ULONG_MAX: %lu\n",ULONG_MAX);

	/*
	 * long long
	 */
	printf("\nLLONG_MAX: %lld\n",LLONG_MAX);
	printf("LLONG_MIN: %lld\n",LLONG_MIN);
	printf("ULLONG_MAX: %llu\n",ULLONG_MAX);

	/*
	 * float
	 */


	/*
	 * double
	 */


}
