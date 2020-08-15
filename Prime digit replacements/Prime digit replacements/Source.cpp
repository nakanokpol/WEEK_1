#include<stdio.h>
#include<math.h>

int main()
{
	int digit[10], a, num = 0;
	char text1[] = "How many digit : ";
	char text2[] = "digit ";
	char text3[] = "\nYour input is : ";
	char text4[] = "\nYour Number is : ";

	printf("%s",text1);
	scanf_s("%d", &a);
	printf("\n");
	for(int i = 0;i < a;i++)
	{
		printf("%s%d : ",text2, i+1);
		scanf_s("%d", &digit[i]);
	}

	printf("%s", text3);
	for (int i = 0;i < a;i++)
	{
		printf("%d", digit[i]);
		while(i<a-1  && i>=0)
		{
			printf(", ");
			break;
		}
	}

	printf("\n%s",text4);
	for (int i = 0;i < a;i++)
	{
		num += digit[i] * pow(10, a - i - 1);
	}
	printf("%d", num);
}