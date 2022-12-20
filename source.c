#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int score = 0;
	srand(time(NULL));
	int num1 = rand() % 10;
	int num2 = rand() % 10;
	int ch = rand() % 4;
	int res;
	int ans;
	while (1)
	{
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
		scanf("%d", ans);

		switch (ch)
		{
		case 0:
			res = num1 + num2;
		case 1:
			res = num1 - num2;
		case 2:
			res = num1 * num2;
		case 3:
			res = num1 / num2;
		}
		if (ans == res)
		{
			score++;
			printf("정답입니다. 점수: %d", score);
		}
		else
		{
			printf("오답입니다. 점수: %d", score);
		}

	}

}