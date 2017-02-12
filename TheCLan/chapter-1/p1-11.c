#include <stdio.h>

int main(void)
{
	int spacen, tabn, entern, c;

	spacen = 0;
	tabn = 0;
	entern = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++spacen;
		if (c == '\t')
			++tabn;
		if (c == '\n')
			++entern;
	}

	printf("space %d, tab %d, enter %d\n", spacen, tabn, entern);
}
