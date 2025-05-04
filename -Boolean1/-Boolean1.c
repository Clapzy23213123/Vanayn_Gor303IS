/*
-Boolean1°. Дано целое число A. Проверить истинность высказывания: «Число A является положительным». 
Ванян Гор 303ИС-22
03.05.25
Выполнил за 1 минуту
*/
#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	if (a > 0) {
		printf("true\n");
	} else {
		printf("false\n");
	}
	return 0;
}

