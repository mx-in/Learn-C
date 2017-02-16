#include <stdio.h>

#define MAXLINE 1000 
int max;
char line[MAXLINE];
char longest [MAXLINE]; 

int getlinen(void);
void copy(void);

int main(void)
{
	int len;

	max = 0;
	while ((len = getlinen()) > 0)
		if (len > max) {
			max = len;	
			copy();
		}
	printf("%s", longest );

	return 0;
}

int getlinen(void)
{
	int i, c;
	extern char line[];

	for (i = 0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void copy(void)
{
	int i;
	extern char longest[], line[];

	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;
}
