/*
-Text1°. Дано имя файла и целые положительные числа N и K. 
Создать текстовый файл с указанным именем и записать в него N строк, каждая из которых состоит из K символов «*» (звездочка). 
Ванян Гор 303ИС-22
03.05.25
Выполнил за 19 минут 
*/
#include <stdio.h>

int main() {
	char filename[100];
	int N, K;
	scanf("%s %d %d", filename, &N, &K);
	FILE *file = fopen(filename, "w");
	if (file) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < K; j++) {
				fprintf(file, "*");
			}
			fprintf(file, "\n");
		}
		fclose(file);
	}
	return 0;
}

