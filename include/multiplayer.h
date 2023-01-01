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
		printf("\n�Ʀr�d�� %d �� %d.\n", min, max);
		printf("�Ъ��a %d ��J�A���q��: ", player[count % y]);
		scanf("%d", &n);
		if (n >= min && n <= max)
		{
			if (n > key)
				max = n - 1;
			else if (n < key)
				min = n + 1;
			else
			{
				printf("�I!! ���a %d��F!\n\n�O�_�A�Ӥ@�� (Y/N)? ", player[count % y]);
				count = -1;
				min = 1;
				max = x;
				scanf("%s", &c);
			}
			count++;
		}
		else
			printf("��J�ƭȿ��~.\n");
	} while (c[0] == 'y' || c[0] == 'Y');
}
