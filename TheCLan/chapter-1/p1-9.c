#include <stdio.h>

#define NOTBLANK 'a'

int main(void)
{
	int c, lastc;	
	
	lastc = NOTBLANK;
	while ((c = getchar()) != EOF) {
		if (c != ' ')
			putchar(c);

		if (c == ' ')
			if (lastc != ' ')	
				putchar(c);
		lastc = c;
	}
}
