/*
+File1. Дана строка S.
Если S является допустимым именем файла, то создать пустой файл с этим именем и вывести True. Если файл с именем S создать нельзя, то вывести False. 
Ванян Гор 303ИС-22
03.05.25
Выполнил за 29 минуту 
*/
#include <stdio.h>

int main() {
	char S[100];
	scanf("%s", S);
	FILE *file = fopen(S, "w");
	if (file) {
		fclose(file);
		printf("True\n");
	} else {
		printf("False\n");
	}
	return 0;
}

