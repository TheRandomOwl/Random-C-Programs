#include <stdio.h>
#include <math.h>
 
long double nilakantha_pi();
long double BBP_formula();

int main(void) {
	printf("Pi is: %.15Lf\nPi is: %.15Lf\n", nilakantha_pi(), BBP_formula());
	return 0;
}

long double nilakantha_pi(void) {
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

long double BBP_formula(void) {
	int end_at = 10;
	long double k = 0.0;
	long double formula = (1/pow(16.0, k)) * ((4.0/(8.0 * k + 1.0))- (2.0/(8.0 * k + 4.0))
	- (1.0/(8.0 * k + 5.0)) - (1.0/(8.0 * k + 6.0)));
	k = 1.0;

	for(int i = 1; i <= end_at; i++) {
		formula += (1/pow(16.0, k)) * ((4.0/(8.0 * k + 1.0))- (2.0/(8.0 * k + 4.0))
		- (1.0/(8.0 * k + 5.0)) - (1.0/(8.0 * k + 6.0)));  
		k += 1.0;
	} 

	return formula;
}
