#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu() {
	printf("****************************\n");
	printf("         猜数字游戏         \n");
	printf("  1、开始游戏，0、结束游戏  \n");
	printf("         请输入0或1         \n");
	printf("****************************\n");
	return;
}
void game() {
	int num = 0;
	int to_guess = rand() % 100 + 1;
	while (1) {
		printf("请输入猜的数字：\n");
		scanf("%d", &num);
		if (num > to_guess) {
			printf("高了！\n");
		}
		else if (num < to_guess) {
			printf("低了！\n");
		}
		else {
			printf("恭喜你猜对了！\n");
			break;
		}
	}
}
int main() {
	int a;
	menu();
	srand((unsigned int)time(0));
	while (1) {
		printf("请输入您的选择：\n");
		if (scanf("%d", &a)) {
			if (a == 1) {
				game();
			}
			else if (a == 0) {
				printf("goodbye!\n");
				break;
			}
			else {
				printf("您的输入有误，请重新输入\n");
			}
		}
	}
	system("pause");
	return 0;
}
