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
			printf("\n�Ʀr�d�� %d �� %d.\n", min, max);
			printf("�Ъ��a��J�A���q��: ");
			scanf("%d", &n);
			if (n >= min && n <= max) {
				if (n > key)
					max = n - 1;
				else if (n < key)
					min = n + 1;
				else {
					printf("�I!! �A��F!\n\n�O�_�A�Ӥ@�� (Y/N)? ");
					key = rand() % x + 1;
					count = -1;
					min = 1;
					max = x;
					scanf("%s", &c);
				}
				count++;
			}
			else
				printf("��J�ƭȿ��~.\n");
		}

		while (count % 2 == 1)
		{
			printf("\n�Ʀr�d�� %d �� %d.\n", min, max);
			i = rand() % (max - min + 1) + min;
			printf("�q���q %d\n", i);
			if (i >= min && i <= max) {
				if (i > key)
					max = i - 1;
				else if (i < key)
					min = i + 1;
				else {
					printf("�I!! �q����F!\n\n�O�_�A�Ӥ@�� (Y/N)? ");
					key = rand() % x + 1;
					count = -1;
					min = 1;
					max = x;
					scanf("%s", &c);
				}
				count++;
			}
			else
				printf("��J�ƭȿ��~.\n");
		}


	} while (c[0] == 'y' || c[0] == 'Y');
}
