#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int num1 = rand() % 10;
	int num2 = rand() % 10;
	int ch = rand() % 4;
	printf("%d ", num1);
	switch (ch)
	{
	case 0:
		printf("+");
	case 1:
		printf("-");
	case 2:
		printf("*");
	case 3:
		printf("/");
	}
	printf(" %d", num2);
	int ans;
	scanf("%d", ans);
}