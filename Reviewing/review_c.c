#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randd()
{
	srand((unsigned int)time(NULL));
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
}

void print()
{
	//printf("int string: ######%-8d######\n", 666666);

	//printf("float string: ######%12f######\n", 11.111);
	//printf("float string: ######%8.4f######\n", 11.111);
	//printf("float string: ######%*.*f######\n", 8, 4, 11.111);

	//printf("char *: ########%.6s########\n", "this is a char * string");
	//printf("char *: ########%.6s########\n", "this is a char * string");

	//char* s = "";
	//char s[10];
	//scanf("%9s", s);
	//printf("%s", s);

	//int year = 0;
	//int month = 0;
	//int day = 0;
	//scanf("%d%*c%d%*c%d", &year, &month, &day);
	//printf("%d-%d-%d", year, month, day);

	//int i = 0, a = 1, b = 2, c = 3, d = 0;
	//i = a++ && ++b && d++;

	//printf("a = %d, b = %d, c = %d, d = %d, i = %d\n", a, b, c, d, i);

}

int main()
{
	//print();
	randd();

	return 0;
}