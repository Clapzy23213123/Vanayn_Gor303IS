/*
-Minmax1°. Дано целое число N и набор из N чисел. Найти минимальный и максимальный из элементов данного набора и вывести их в указанном порядке. 
Ванян Гор 303ИС-22
03.05.25
Выполнил за 15 минут 
*/
#include <stdio.h>

int main() {
	int N, num, min, max;
	scanf("%d", &N);
	scanf("%d", &num);
	min = max = num;
	
	for (int i = 1; i < N; i++) {
		scanf("%d", &num);
		if (num < min) min = num;
		if (num > max) max = num;
	}
	
	printf("%d %d\n", min, max);
	return 0;
}

