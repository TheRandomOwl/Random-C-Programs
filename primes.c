/* This program finds and lists the prime numbers between 1 and 1,000,000. */
#include <stdio.h>

int main(void) {
	int h;
	int testprime = 1;
	int primes[78499] = {2};
	for (int i = 2; i <= 1000000; i += 1) {
		for (h = 0; h < testprime - 1; h += 1) {
		/* Tests if a number is divisible by a prime number. */
			if (i % primes[h] == 0) {
				h = -1;
				break;
		/* Since a number can't be divisible by a number greater than half of
		 * itself, time will be saved by using break when the primes variable is
		 * greater than half of i. */
			} else if (primes[h] > i / 2) {
				break;
			}
		}
		if (h != -1) {
			primes[testprime] = i;
			testprime += 1;
			printf("%i\n", i);
		}
	}
	return 0;
}
