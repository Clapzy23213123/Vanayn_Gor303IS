/*
-For1. Даны целые числа K и N (N > 0). Вывести N раз число K. 
Ванян Гор 303ИС-22
03.05.25
Выполнил за 4 минуту
*/
#include <stdio.h>

int main(){
	int k,n;
	scanf("%d %d", &k, &n);
	for (int i = 0; i < n; i++) {
		printf("%d\n", k);
	}
return 0;	
}
