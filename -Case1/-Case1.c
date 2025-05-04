/*
-Case1. Дано целое число в диапазоне 1–7. Вывести строку — название дня недели, соответствующее данному числу (1 — «понедельник», 2 — «вторник» и т. д.). 
Ванян Гор 303ИС-22
03.05.25
Выполнил за 5 минуту
*/
#include <stdio.h>

int main() {
	int day;
	scanf("%d", &day);
	switch (day) {
		case 1: printf("ponedelnik\n"); break;
		case 2: printf("vtornik\n"); break;
		case 3: printf("sreda\n"); break;
		case 4: printf("chetverg\n"); break;
		case 5: printf("pyatnitsa\n"); break;
		case 6: printf("subbota\n"); break;
		case 7: printf("voskresen'e\n"); break;
	}
	return 0;
}


