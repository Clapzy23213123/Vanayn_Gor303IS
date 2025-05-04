/*
+Param1°. Описать функцию MinElem(A, N) целого типа, находящую минимальный элемент целочисленного массива A размера N. 
С помощью этой функции найти минимальные элементы массивов A, B, C размера NA, NB, NC соответственно. 
Ванян Гор 303ИС-22
03.05.25
Выполнил за 24 минут 
*/
#include <stdio.h>

int MinElem(int A[], int N) {
	int min = A[0];
	for (int i = 1; i < N; i++) {
		if (A[i] < min) {
			min = A[i];
		}
	}
	return min;
}

int main() {
	int A[] = {3, 1, 4}, B[] = {5, 9, 2}, C[] = {6, 5, 3};
	int NA = 3, NB = 3, NC = 3;
	
	printf("%d\n", MinElem(A, NA));
	printf("%d\n", MinElem(B, NB));
	printf("%d\n", MinElem(C, NC));
	
	return 0;
}

