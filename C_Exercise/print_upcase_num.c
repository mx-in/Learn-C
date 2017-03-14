#include <stdio.h>
#include <stdlib.h>

#define MAX_INPUT 6
static char c_number[10][4] = {"零", "壹", "貳", "参", "肆", "伍", "陸", "柒", "捌", "玖"};
static char c_palce[5][4] = {"", "十", "百", "千", "万"};

int sort_parray(int n, int arr[]);
void print_cname(int n[], int upper);

int main(void)
{
	int n;
	scanf("%d", &n);
	int pnum[MAX_INPUT];
	int upper = sort_parray(n, pnum);
	print_cname(pnum, upper);

	return 0;
}

int sort_parray(int n, int place_num[])
{
	int i;
	for (i = 0; i < MAX_INPUT; ++i) {
		place_num[i] = n % 10;
		if (n >= 10) {
			n = n / 10;
		} else {
			break;
		}
	}
	return i;
}

void print_cname(int sort_arr[], int upper)
{
	printf("%d\n", sort_arr[-2]);
	for(int i = upper; i >= 0; i--) {
		int n = sort_arr[i];

		if ((n == 0 && i > 0 && sort_arr[i-1] == 0) || (n == 0 && i==0))
//		if ((n == 0 && sort_arr[i-1] == 0) || (n == 0 && i==0))
			printf("");
		else
			printf("%s", c_number[sort_arr[i]]);

		if (n > 0)
			printf("%s", c_palce[i]);
	}
}
