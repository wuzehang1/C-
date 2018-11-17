#include"pch.h"
#include<stdio.h>
int main(void)
{
	int x, y, sub;
	scanf_s("%d%d", &x, &y);
	sub = x * x - y * y;
	printf("%c,%c, %d", x, y, sub);
}