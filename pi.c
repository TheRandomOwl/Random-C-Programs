#include <stdio.h>
 
long double nilakantha_pi();

int main() {
	printf("Pi is: %.15Lf\n", nilakantha_pi());
	return 0;
}

long double nilakantha_pi() {
	long double a[5] = {2.0, 3.0, 4.0, 5.0, 6.0};
	long double series = 4.0/(a[0]*a[1]*a[2]) - 4.0/(a[2]*a[3]*a[4]);

	for(int i = 1; i <= 35000; i++) {
		a[0] += 4;
		a[1] += 4;
		a[2] += 4;
		a[3] += 4;
		a[4] += 4;
		series += 4.0/(a[0]*a[1]*a[2]) - 4.0/(a[2]*a[3]*a[4]);
	}

	long double pi = 3.0 + series;
	return pi;
}
