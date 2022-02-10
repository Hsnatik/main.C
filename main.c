#include <stdio.h> 
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "NUTILITY.h"

//#include <math.h>
//#include <stdbool.h>
//#include <limits.h> 
//#include <assert.h>

//		KEYS		Exp.
// 
//		CTRL K C	Comment in
//		CTRL K U	Comment out		
//		
//
//

//#define		SWAP(x, y)		do{int temp = x; x = y; y = temp;}while(0)

//#define _CRT_SECURE_NO_WARNINGS

#define		SIZE		10

int icmp(const void* vp1 , const void* vp2)
{
	return *(const int*)vp1 - *(const int*)vp2;
}

int main() {


	int a[SIZE];
	int b[SIZE];
	int c[SIZE * 2];

	randomize();
	set_array_random(a, SIZE);
	set_array_random(b, SIZE);
	set_array_random(c, SIZE);

	qsort(a, SIZE, sizeof(int), &icmp);
	qsort(b, SIZE, sizeof(int), &icmp);

	print_array(a, SIZE);
	print_array(b, SIZE);


}











//DERS 24 
// TEKLER CIFTLER BUYUKTEN KUCUGE 
// Bubble Sort
//int main()
//{
//	int a[SIZE];
//
//	randomize();
//	set_array_random(a, SIZE);
//	print_array(a, SIZE);
//
//	for (int i = 0; i < SIZE - 1; ++i) {
//		for (int j = 0; j < SIZE - 1; ++j) {
//			if (((a[j] > a[j + 1]) && a[j] % 2 == a[j + 1] % 2) || ((a[j] % 2 == 0) && (a[j + 1] % 2))) {
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	print_array(a, SIZE);
//}








//O(log(n))karma��kl��� SIRALAMA
//DERS 24
//int icmp(const void* vp1 , const void* vp2)
//{
//	return *(const int*)vp1 - *(const int*)vp2;
//}
//int main() {
//	int a[SIZE];
//
//	randomize();
//	set_array_random(a, SIZE);
//	qsort(a, SIZE, sizeof(int), &icmp);
//	print_array(a, SIZE);
//
//	int sval;
//
//	printf("aranan degeri giriniz: ");
//	scanf_s("%d", &sval);
//
//	int idx_first = 0;
//	int idx_last = SIZE - 1;
//	int idx_mid;
//
//	int cnt = 0;
//	while (idx_first <= idx_last)
//	{
//		++cnt;
//		idx_mid = (idx_first + idx_last) / 2;
//		if (a[idx_mid] == sval)
//			break;
//
//		if (a[idx_mid] > sval)
//			idx_last = idx_mid - 1;
//
//		else
//			idx_first = idx_mid + 1;
//	}
//
//	if (idx_first > idx_last)
//	{
//		printf("aranan deger bulunamadi\n");
//	}
//	else
//	{
//		printf("bulundu dizinin %d indisli elemani\n", idx_mid);
//	}
//		printf("adim sayisi = %d", cnt);
//}



//ARRAY REVERSE
// DERS 24
	//for (int i = 0; i < SIZE / 2; ++i)
	//{
	//	int temp = a[i];
	//	a[i] = a[SIZE - 1 - i];
	//	a[SIZE - 1 - i] = temp;
	//}

	
	/*
#ifdef __cplusplus
	#error BU PROGRAM SADECE C99 DERLEY�C�S� �LE DERLENMEL�
#endif
*/


//#pragma warning(disable: 4244)


/*
#if
#else
#elif
#endif
#ifdef
#ifndef
#undef
#define
#include
*/


/*
* //MULTIPLE INCLUSION GUARD
* 
#ifndef NUTILITY_H
#define NUTILITY_H
#endif
*/


/*
#line
	__LINE__
	__FILE__
	__DATE__
	__TIME__
	__STDC__	// If standart C compiler and extensions are off returns 1;
	__cplusplus
	__func__
	__FUNCSIG__ // Standart degil.  
	*/


/*
* //TUM ASAL BOLENLER
* //ORNEK DERS 16
void asal_bolenler(int n){

	printf("bir tamsayi gir: ");
	scanf_s("%d", &n);

	int x = 2;
	while (n != 1) {
		while (n % x == 0) {
			printf("%d ", x);
			n /= x;
		}
		++x;
	}
}
*/



/*
//ARMSTRONG NUMBER
// ORNEK DERS 16
void armstrong_number(){
	int val = 1000;
	for (int i = 1; i <= 9; ++i) {
		for (int j = 0; j <= 9; ++j) {
			for (int k = 0; k <= 9; ++k) {
				for (int u = 0; u <= 9; ++u) {
					if (i * i * i * i + j * j * j * j + k * k * k * k + u * u * u * u == val)
						printf("%d\n", val);
					++val;
				}
			}
		}
	}
}
*/


/*
* // ASAL SAYI KONTROLU ISPRIME
* // ORNEK DERS 16
int isprime(int x) {
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
}
*/


/*
* //RECURSIVE FACTORIAL FUNCTION DERS 16
long long int factorial(int num) 
{
	return num <= 1 ? 1 : num * factorial(n - 1);
}
*/


/*
* //ORNEK DERS 15
int main() {

	int c;
	int ival;
	int counter = 0;
	int sum = 0;
	int min = INT_MAX;
	int max = INT_MIN;
	while (1) {
		printf("bir harf gir e h ; ");
		while ((c = getchar()) != 'e' && c != 'h')
			;		//null statement
		//printf("%c", c);
		if ('h' == c)
			break;

		printf("\nbir tam sayi giriniz: ");
		ival = ((rand() % 2) ? 1 : -1) * rand();
		//printf("%d \n", ival);
		counter++;

		sum += ival;

	}
		if (counter == 0) {
			printf("bir sayi girmedin\n");
			max = min = ival;
		}
		else if (ival < min) {
			min = ival;
		}

		else if (ival > max) {
			max = ival;
		}
			printf("toplan %d sayi girildi:  \n" , counter);
			printf("minimum : %d\nmaximum : %d\n ortalama : %f\n", min, max, (double)sum / counter);

	}
	*/  


/*
* //POWER METHOD
int power(int base, int exp) {

	int result = 1;
	while (exp--)
		result *= base;

	return result;
}
*/


/*
* //�RNEK BUYUK KUCUK HARF
int to_opposite_case(int c) {
	if (isupper(c))
		return tolower(c);
}
*/
/*
//BUFFERI TEMIZLEME KODU
void clear_input_buffer(void) {
	int c;
	while ((c = getchar()) != '\n' && c != EOF);

}
*/


/*
//TERNARY OPERATOR
int max2(int a, int b) {
	return a > b ? a : b;
}
*/


/* 
//MULAKAT 3E BOLME SORUSU

	int ch;
	int sumval = 0;

	printf("Say� gir : ");

	while ((ch = getchar()) != '\n') {
		sumval += ch - '0';"
	}

	printf("Sonuc : %d ", sumval);
*/


	/* 
	//CHARI EKRANA BASMA
	printf("%c", 65);
	*/

	/*
	//G�R�NT�S� OLAN T�M ASCII KARAKTERLER
	for (int i = 33; i < 127; ++i)
		putchar(i);
	*/


	/*
	int ival;
	printf("enter something crazy:");
	int return_value = scanf_s("%d", &ival);
	if (1 == return_value)
		printf("Enter Successfull. The value is : %d", ival);
	else if (0 == return_value)
		printf("Enter is not Successfull.\n");
	else if (-1 == return_value)
		printf("No input\n");
	//Hoca scanf -1 d�nd�r�rse bu ^Z yani bo� karakter girildi demektir dedi 
	//ama bende s�f�r d�nderiyor yine 
	*/


	/*
	int ival;

	printf("enter something crazy: \n");
		
	int c1 = getchar();
	int c2 = getchar();
	int c3 = getchar();
		
	scanf_s("%d", &ival);

	printf("c1 = %d\n", c1);
	printf("c2 = %d\n", c2);
	printf("c3 = %d\n", c3);
	printf("ival = %d\n", ival);

	return 0;
	}

	*/
	/* //NDIGIT
	int ndigit(int val) {
	if (val == 0) 
		return 1;
 
	int digit_counter = 0;

	while (val) {
		++digit_counter;
		val /= 10;
	}
	return digit_counter;
	}
	 */


	/*
	
	<ctype.h>

	int isupper(int ch)
	int islower(int ch)
	int isalpha(int ch)
	int isdigit(int ch)
	int isalnum(int ch)			// alpha numeric
	int isxdigit(int ch)		// hex characters
	int isscpace(int ch)
	int ispunct(int ch)
	*/

/*
	//YUKARIYA �RNEK
	void all_ASCII_chars(void){
	printf("isdigit\n");
		for(int i = 0; i < 128; ++i) {
			if (isdigit(i))
				printf("%c", i);
		}

	printf("\nisalnum\n");
		for(int i = 0; i < 128; ++i) {
			if (isalnum(i))
				printf("%c", i);
		}

	printf("\nisxdigit\n");
		for(int i = 0; i < 128; ++i) {
			if (isxdigit(i))
				printf("%c", i);
		}
	printf("\nisblank\n");
		for(int i = 0; i < 128; ++i) {
			if (isblank(i))
				printf("%d", i);
		}
		printf("\n");
		}
*/