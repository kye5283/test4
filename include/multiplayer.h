#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiplayer(int x, int y)
{
	srand(time(NULL));
	int n, count = 0;
	int min = 1, max = x;
	int key = rand() % x + 1;
	int player[100];
	for (int i = 0; i < y; i++)
	{
		player[i] = i + 1;
	}
	char c[2] = "y";
	do {
		printf("\n數字範圍為 %d 到 %d.\n", min, max);
		printf("請玩家 %d 輸入你的猜測: ", player[count % y]);
		scanf("%d", &n);
		if (n >= min && n <= max)
		{
			if (n > key)
				max = n - 1;
			else if (n < key)
				min = n + 1;
			else
			{
				printf("碰!! 玩家 %d輸了!\n\n是否再來一局 (Y/N)? ", player[count % y]);
				count = -1;
				min = 1;
				max = x;
				scanf("%s", &c);
			}
			count++;
		}
		else
			printf("輸入數值錯誤.\n");
	} while (c[0] == 'y' || c[0] == 'Y');
}
