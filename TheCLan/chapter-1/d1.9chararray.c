#include <stdio.h>
#define MAXLINE 10

int getlines(char line[], int mxaline);
void copy(char to[], char from[]);

int main(void)
{
	int len; /* length of input line; */
	int max;
	char line[MAXLINE]; /* input line the */
	char longest[MAXLINE]; /* the longest line which have input */
	
	max = 0;
	while((len = getlines(line, MAXLINE)) > 0)
		printf("%d, %s", len, line);
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("the longest: %s\n", longest);
	return 0;
}

int getlines(char s[], int lim)
{
	int c, i;

	for(i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[]) 
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\n')
			++i;
}




