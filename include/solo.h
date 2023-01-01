#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void solo(int x)
{
	srand(time(NULL));
	int n, count = 0, i;
	int min = 1, max = x;
	int key = rand() % x + 1;
	char c[2] = "y";

	do
	{
		while (count % 2 == 0)
		{
			printf("\n數字範圍為 %d 到 %d.\n", min, max);
			printf("請玩家輸入你的猜測: ");
			scanf("%d", &n);
			if (n >= min && n <= max) {
				if (n > key)
					max = n - 1;
				else if (n < key)
					min = n + 1;
				else {
					printf("碰!! 你輸了!\n\n是否再來一局 (Y/N)? ");
					count = -1;
					min = 1;
					max = x;
					scanf("%s", &c);
				}
				count++;
			}
			else
				printf("輸入數值錯誤.\n");
		}

		while (count % 2 == 1)
		{
			printf("\n數字範圍為 %d 到 %d.\n", min, max);
			i = rand() % (max - min + 1) + min;
			printf("電腦猜 %d\n", i);
			if (i >= min && i <= max) {
				if (i > key)
					max = i - 1;
				else if (i < key)
					min = i + 1;
				else {
					printf("碰!! 電腦輸了!\n\n是否再來一局 (Y/N)? ");
					count = -1;
					min = 1;
					max = x;
					scanf("%s", &c);
				}
				count++;
			}
			else
				printf("輸入數值錯誤.\n");
		}


	} while (c[0] == 'y' || c[0] == 'Y');
}