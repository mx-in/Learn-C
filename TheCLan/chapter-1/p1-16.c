/* Exercise 1-16 page 30
 * Revice the main routine of the longest-lin program so it will correctly print the length  of arbitrarily long input line, and  much as possible of text.
*/

#include <stdio.h>
#define MAXLINE 10

int getlines(char line[], int maxline);
int getlines2(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len  = getlines2(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}

	}

	if (max > 0)
		printf("the longest %s\n", longest);
	
	return 0;
}

int getlines(char s[], int lim)
{
	int c, i;

	for (i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) 
		s[i] = c;
	if (c == '\n') {
		s[i] = '\n';
		++i;
	}
	s[i] = '\0';
	return i;
}

int getlines2(char s[], int lim)
{
	int c, i, j;
	j = 0;
	for (i = 0; (c = getchar()) !=EOF && c != '\n'; ++i)
		if (i < lim-2) {
			s[j] = c;
			++j;
		}
	if (c == '\n') {
		s[j] = c;
		++j;
		++i;
	}
	s[j] =  '\0';
	return i;
}
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}




