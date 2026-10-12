#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, ".UTF8");
	puts("Hello Word! Привет мир!");
	puts("Нажмите Enter для продолжения...");
	getchar();
	puts("Продолжение программы");
	return 0;
}