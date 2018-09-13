#include <stdio.h>
#include <limits.h>

int power(int n) {
	int value = 1;
	while (n != 0) {
		value = 2 * value;
		--n;
	}
	return value;
}

int main() {

	printf("The size of type char is: %u\n", sizeof(char));
	printf("The size of type int is: %u\n", sizeof(int));
	printf("The size of type short int is: %u\n", sizeof(short int));
	printf("The size of type long is: %u\n", sizeof(long));
	printf("The size of type float is: %u\n", sizeof(float));
	printf("The size of type double is: %u\n", sizeof(double));
	printf("The size of type long double is: %u\n", sizeof(long double));

	printf("The size of type size_t is: %u\n", sizeof(size_t));
	printf("The size of type wchar_t is: %u\n", sizeof(wchar_t));
	printf("The size of type unsigned char is: %u\n", sizeof(unsigned char));
	printf("The size of type unsigned int is: %u\n", sizeof(unsigned int));
	printf("The size of type unsigned short int is: %u\n", sizeof(unsigned short int));
	printf("The size of type unsigned long is: %u\n", sizeof(unsigned long));

	int max_value = 0;

	max_value = power(sizeof(short int) * 8 - 1) - 1;
	printf("The last positive value is: %d\n", max_value);
	printf("The last positive value is: %d\n", SHRT_MAX);

	max_value = power(sizeof(unsigned short int) * 8) - 1;
	printf("The last positive value is: %d\n", max_value);
	printf("The last positive value is: %d\n", USHRT_MAX);

	short int iov = 0;
	while (iov >= 0) {
		iov += 10000;
	}
	printf("The last positive value is: %d\n", iov);






}
