#include <stdio.h>

#define IN 1
#define OUT 2

int main(int argc, char *argv[])
{
	int c, state;
	
	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {
				putchar('\n');
				state = OUT;
			}
		} else if(state == OUT) {
			putchar(c);
			state = IN;
		} else {
			putchar(c);
		}
	}
	
//	在连续输入多个空格符等将活产生多个空白空行
//	while ((c = getchar()) != EOF) {
//		if (c == ' ' || c == '\n' || c == '\t') {
//			putchar('\n');
//		} else {
//			putchar(c);
//		}
//	}

}
