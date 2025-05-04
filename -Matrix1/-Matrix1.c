/*
-Matrix1. Даны целые положительные числа M и N. Сформировать целочисленную матрицу размера M × N, у которой все элементы I-й строки имеют значение 10·I (I = 1, …, M). 
Ванян Гор 303ИС-22
03.05.25
Выполнил за 24 минут 
*/
#include <stdio.h>

int main() {
	int M, N;
	scanf("%d %d", &M, &N);
	int matrix[M][N];
	
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = 10 * (i + 1);
		}
	}
	
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}

