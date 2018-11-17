#include"pch.h"
#include<stdio.h>
int main(void)
{
	char c1 = 'a';
	char c2 = 'b';
	char c3 = 'c';
	char c4 = '\101';
	char c5 = '\116';
	printf("a=%cb%c\tc%c\tabc\n", c1, c2, c3);
	printf("\t\b%c%c", c4, c5);
}