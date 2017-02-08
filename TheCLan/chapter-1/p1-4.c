#include <stdio.h>

int main() {

	printf("***convert celsius to fahr***\n");

	float celsius, fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	while(celsius < upper) {
		fahr = celsius / (5.0/9.0) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
