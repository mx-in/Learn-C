/*Exercise 1-15 page  27
 *Rewrite the tempreature conversion program of Section 1.2 to use function for conversion
 */

#include <stdio.h>

double fahrtocels(float fahr);

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower =  0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr < upper) {
		printf("%3.0f, %6.1f\n", fahr, fahrtocels(fahr));
		fahr = fahr + step;
	}
}

double fahrtocels(float fahr)
{
	double cels = (5.0/9.0) * (fahr-32.0);
	return cels;
}
