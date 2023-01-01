#include <stdio.h>
#include <stdlib.h>
#include "../include/solo.h"
#include "../include/multiplayer.h"

int main(void)
{
	int a, b, i;
	printf("請輸入遊玩模式，(單人模式=1,多人模式=2):");
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		printf("請輸入0~a，a=");
		scanf("%d", &a);
		solo(a);
		break;
	case 2:
		printf("請輸入遊玩人數，b=");
		scanf("%d", &b);
		printf("請輸入0~a，a=");
		scanf("%d", &a);
		multiplayer(a, b);
		break;
	}
	system("pause");
	return 0;
}