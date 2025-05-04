/*
+Recur1°. Описать рекурсивную функцию Fact(N) вещественного типа, вычисляющую значение факториала
N! = 1·2·…·N
(N > 0 — параметр целого типа). С помощью этой функции вычислить факториалы пяти данных чисел. 

Ванян Гор 303ИС-22
03.05.25
Выполнил за 36 минут 
*/
#include <stdio.h>

double Fact(int N) {
	return (N > 1) ? N * Fact(N - 1) : 1;
}

int main() {
	int numbers[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &numbers[i]);
	}
	
	for (int i = 0; i < 5; i++) {
		printf("%lf\n", Fact(numbers[i]));
	}
	
	return 0;
}

