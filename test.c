#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu() {
	printf("****************************\n");
	printf("         ��������Ϸ         \n");
	printf("  1����ʼ��Ϸ��0��������Ϸ  \n");
	printf("         ������0��1         \n");
	printf("****************************\n");
	return;
}
void game() {
	int num = 0;
	int to_guess = rand() % 100 + 1;
	while (1) {
		printf("������µ����֣�\n");
		scanf("%d", &num);
		if (num > to_guess) {
			printf("���ˣ�\n");
		}
		else if (num < to_guess) {
			printf("���ˣ�\n");
		}
		else {
			printf("��ϲ��¶��ˣ�\n");
			break;
		}
	}
}
int main() {
	int a;
	menu();
	srand((unsigned int)time(0));
	while (1) {
		printf("����������ѡ��\n");
		if (scanf("%d", &a)) {
			if (a == 1) {
				game();
			}
			else if (a == 0) {
				printf("goodbye!\n");
				break;
			}
			else {
				printf("����������������������\n");
			}
		}
	}
	system("pause");
	return 0;
}
