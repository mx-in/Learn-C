#include <stdio.h>
int main()
{
//	int fahr, celsius;
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower; //在操作前int将被转化为float
	while(fahr < upper) {
//		celsius = 5 * (fahr-32) / 9;
//		printf("%3d %6d\n", fahr, celsius);

		celsius = (5.0/9.0) * (fahr-32.0); // 如果算数运算中有一个浮点型操作数，和一个整型操作数，在运算开始之前，整型将被自动转化为浮点型，一般添加小数点以方便阅读
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
