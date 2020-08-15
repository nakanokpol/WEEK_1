#include<stdio.h>
#include<math.h>

int main()
{
	int digit[10],i , a, num = 0, b, digitremove[10];
	char text1[] = "How many digit : ";
	char text2[] = "digit ";
	char text3[] = "\nYour input is : ";
	char text4[] = "\nYour Number is : ";
	char text5[] = "\nHow many digit you want to replace :";

	printf("%s",text1);
	scanf_s("%d", &a);
	printf("\n");
	if (a <= 10 || a > 1)
	{
		for (i = 0;i < a;i++) // get the value of each digit of the number
		{
			printf("%s%d : ", text2, i + 1);
			scanf_s("%d", &digit[i]);
		}
	}
	else
	{
		printf("The number of digits must be 2-10.");
		return 0;
	}

	printf("%s", text3);
	for (i = 0;i < a;i++) // show each digit pushed in
	{
		printf("%d", digit[i]);
		while(i<a-1  && i>=0) // comma between each digit 
		{
			printf(", ");
			break;
		}
	}

	printf("\n%s",text4); // get the value of the number
	for (i = 0;i < a;i++)
	{
		int j = a - i - 1;
		num += digit[i] * pow(10, j); // a - (i + 1) -> i start from 0
	}
	printf("%d\n", num);
	printf("%s", text5);///////

	scanf_s("%d", &b);

	if (b >= a  || b<=0)
	{
		printf("The number of digits you want to replace must be 1-");
		return 0;
	}
	else
	{
		for (i=0; i<b ; i++)
		{
			scanf_s("%d",&digitremove[i]);
		}
	}

}

double prime(int x)//////////// not in use
{
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			printf("");
			while (i-1)//////////////////////
			{
				break;
			}
		}
	}
}


