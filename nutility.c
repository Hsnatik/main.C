#include "nutility.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


int isprime(int val)
{
	if (val == 0 || val == 1)
		return 0;

	if (val % 2 == 0)
		return val == 2;

	if (val % 3 == 0)
		return val == 3;

	if (val % 5 == 0)
		return val == 5;

	for (int k = 7; k * k <= val; k += 2)
		if (val % k == 0)
			return 0;

	return 1;
}


//-------------------------------------------------------------------------------------
/*int isprime(int x) {
	if (x < 2)
		return 0;

	if (x % 2 == 0)
		return x == 2;

	if (x % 3 == 0)
		return x == 3;

	if (x % 5 == 0)
		return x == 5;

	for (int i = 7; i * i <= x; i += 2) {
		if (x % i == 0)
			return 0;
	}
	return 1;
}*/
//-------------------------------------------------------------------------------------


static int icmp(const void* vp1, const void* vp2)
{
	return *(const int*)vp1 - *(const int*)vp2;
}


//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------



void set_array_random(int* p, int size)
{
	while (size--) {
		*p = rand() % 1000;
		++p;
	}
}


//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------



void print_array(const int* p, int size)
{
	for (int i = 0; i < size; ++i) {
		if (i != 0 && i % 20 == 0)
			printf("\n");
		printf("%3d ", p[i]);
	}
	printf("\n-------------------------------------------------------------------------------\n");
}



//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------


void sort_array(int* p, int size)
{
	qsort(p, size, sizeof(int), &icmp);
}


//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------

void pline(void)
{
	printf("\n----------------------------------------------------------------------\n");
}


//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------

int ndigit(int val)
{
	if (val == 0)
		return 1;

	int digit_count = 0;

	while (val) {
		++digit_count;
		val /= 10;
	}

	return digit_count;
}


//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------


void clear_input_buffer(void)
{
	int c;

	while ((c = getchar()) != '\n' && c != EOF)
		; 
}



void sgets(char* p)
{
	int c;

	while ((c = getchar()) != '\n')
		*p++ = (char)c;

	*p = '\0';
}

void    swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}


void randomize(void)
{
	srand((unsigned)time(NULL));
}