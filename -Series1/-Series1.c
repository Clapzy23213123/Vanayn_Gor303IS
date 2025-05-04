/*
-Series1°. Даны десять вещественных чисел. Найти их сумму. 
Ванян Гор 303ИС-22
03.05.25
Выполнил за 1 минуту
*/
#include <stdio.h>

int main() {
	float a;
	float sum;
	for (int i = 0; i < 10; i++){
		scanf("%f", &a);
		 sum = sum + a;
	}
	printf("%.2f", sum);
	return 0;
}

