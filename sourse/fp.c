#include <stdio.h>
#include <stdlib.h>
#include "../include/solo.h"
#include "../include/multiplayer.h"

int main(void)
{
	int a, b, i;
	printf("�п�J�C���Ҧ��A(��H�Ҧ�=1,�h�H�Ҧ�=2):");
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		printf("�п�J0~a�Aa=");
		scanf("%d", &a);
		solo(a);
		break;
	case 2:
		printf("�п�J�C���H�ơAb=");
		scanf("%d", &b);
		printf("�п�J0~a�Aa=");
		scanf("%d", &a);
		multiplayer(a, b);
		break;
	}
	system("pause");
	return 0;
}