/*
  Write a program detab that replaces tabs in the input with proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns. should n be a vairable or symbolic parameter?
 */

#include <stdio.h>

#define TABINC 8 

int main(void)
{
	int c, nb, pos;

	nb = 0;
	pos = 1;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			nb = TABINC - (pos - 1) % TABINC;
			while (nb > 0) {
				putchar(' ');
				++pos;
				--nb;
			}
		} else if (c == '\n') {
			putchar(c);
			pos = 1;
		} else {
			putchar(c);
			++pos;
		}
		
	}

	return 0;
}


