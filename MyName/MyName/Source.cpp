#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char Name[20];

	printf("Your Name is : ");
	scanf("%s", &Name);

	printf("Hi %s!",Name);
	return 0;
}