/*
-Proc16. Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения: 
−1,    если X < 0;        0,    если X = 0;        1,    если X > 0.
С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B. 

Ванян Гор 303ИС-22
03.05.25
Выполнил за 20 минут 
*/
#include <stdio.h>

int Sign(float X) {
	if (X < 0) return -1;
	else if (X > 0) return 1;
	return 0;
}

int main() {
	float A, B;
	scanf("%f %f", &A, &B);
	int result = Sign(A) + Sign(B);
	printf("%d\n", result);
	return 0;
}

