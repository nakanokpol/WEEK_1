#include<stdio.h>
#include<conio.h>
#include<math.h>

char text1[] = "Enter initial year you doubt in Buddhist Era:";
char text2[] = "Next leap year is: ";
char text3[] = "Last leap year is: ";

double pythagorus(int x, int y)
{
	double z;
	z = sqrt((x * x) + (y * y));
	return z;
}
int Leapafter2(int x)
{
	for (int i = x; i <= 3000; i++)
	{
		if (i % 400 == 0)
		{
			int a = i + 543;
			printf("%s %d\n", text2, a);
			return a;
		}
		else if (i % 4 == 0 && i % 100 != 0)
		{
			int a = i + 543;
			printf("%s %d\n", text2, a);
			return a;
		}
		while (i <= 3000)
		{
			i++;
			if (i % 400 == 0)
			{
				int a = i + 543;
				printf("%s %d\n", text2, a);
				return a;
			}
			else if (i % 4 == 0 && i % 100 != 0)
			{
				int a = i + 543;
				printf("%s %d\n", text2, a);
				return a;
			}
			while (i <= 3000)
			{
				i++;
				if (i % 400 == 0)
				{
					int a = i + 543;
					printf("%s %d\n", text2, a);
					return a;
				}
				else if (i % 4 == 0 && i % 100 != 0)
				{
					int a = i + 543;
					printf("%s %d\n", text2, a);
					return a;
				}
				while (i <= 3000)
				{
					i++;
					if (i % 400 == 0)
					{
						int a = i + 543;
						printf("%s %d\n", text2, a);
						return a;
					}
					else if (i % 4 == 0 && i % 100 != 0)
					{
						int a = i + 543;
						printf("%s %d\n", text2, a);
						return a;
					}
				}
			}
		}
	}
}

int Leapbefore2(int x)
{
	for (int i = x; i >= 2000; i--)
	{
		if (i % 400 == 0)
		{
			int a = i + 543;
			printf("%s %d\n", text3, a);
			return a;
		}
		else if (i % 4 == 0 && i % 100 != 0)
		{
			int a = i + 543;
			printf("%s %d\n", text3, a);
			return a;
		}
		while (i >= 2000)
		{
			i--;
			if (i % 400 == 0)
			{
				int a = i + 543;
				printf("%s %d\n", text3, a);
				return a;
			}
			else if (i % 4 == 0 && i % 100 != 0)
			{
				int a = i + 543;
				printf("%s %d\n", text3, a);
				return a;
			}
			while (i >= 2000)
			{
				i--;
				if (i % 400 == 0)
				{
					int a = i + 543;
					printf("%s %d\n", text3, a);
					return a;
				}
				else if (i % 4 == 0 && i % 100 != 0)
				{
					int a = i + 543;
					printf("%s %d\n", text3, a);
					return a;
				}
				while (i >= 2000)
				{
					i--;
					if (i % 400 == 0)
					{
						int a = i + 543;
						printf("%s %d\n", text3, a);
						return a;
					}
					else if (i % 4 == 0 && i % 100 != 0)
					{
						int a = i + 543;
						printf("%s %d\n", text3, a);
						return a;
					}
				}
			}
		}
	}
}

int main()
{
	int year1, q, w;
	char text4[] = "is a Leap Year.\n";
	char text5[] = "is NOT a Leap Year.\n";

	printf("%s\n", text1);
	scanf_s("%d", &year1);

	int year2 = year1 - 543;

	if (year2 > 0 && year2 <= 3000)
	{
		if (year2 % 400 == 0)
		{
			printf("\n%d %s", year1, text4);
		}
		else if (year2 % 100 == 0)
		{
			printf("\n%d %s", year1, text5);
			q = Leapbefore2(year2);
			w = Leapafter2(year2);
		}
		else if (year2 % 4 == 0)
		{
			printf("\n%d %s", year1, text4);
		}
		else
		{
			printf("\n%d %s", year1, text5);
			q = Leapbefore2(year2);
			w = Leapafter2(year2);
		}
	}
	else
	{
		printf("insert only year 2543-3543");
	}

	if(year1>3539)
	{
		printf("Can't calculate the hypotenuse\n");
	}
	else
	{
		printf("\nHypotenuse= %lf\n", pythagorus(q, w));
	}

	return 0;
}