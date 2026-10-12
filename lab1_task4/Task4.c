#include <stdio.h>
#include <locale.h>
int name()
{
	puts("*******************************************");
	puts("*                                         *");
	puts("* тема: Разработка консольного приложения *");
	puts("* Выполнила Чернышова                     *");
	puts("*                                         *");
	puts("*******************************************");
	return 0;
}
int date()
{
	puts("_   _    _  _    _   _  ");
	puts(" | |_|  | |  |  | | |_| ");
	puts("/_  _| .|_| /_ .|_| |_| ");
	return 0;
}
int main()
{
	setlocale(LC_CTYPE, ".UTF8");
	name();
	date();
	return 0;

}