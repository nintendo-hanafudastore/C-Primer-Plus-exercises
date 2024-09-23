#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int a, b;
//	for (a = 4; a >= 1; a--)
//	{
//		for (b = 8; b >= 1; b--)
//			printf("$");
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char ch;
//	scanf("%c", &ch);//连续输入，分次读取是可行的！！！
//	while (ch != 'g')
//	{
//		printf("%c", ch);
//		=("%c", &ch);
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	char ch = 'a';
//	char zimu[26];
//	for (a = 0; a < 26; a++)
//	{
//		zimu[a] = ch;
//		printf("%c", zimu[a]);
//		ch++;
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	for (a = 1; a < 6; a++)
//	{
//		for (b = 1; b <= a;b++)
//		{
//			printf("$");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char ch ;
//	int i, j;
//	for (i = 6; i > 0; i--)
//	{
//		for (j = 6,ch = 'F'; j >= i  ;j--,ch--)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char ch='A';
//	int i, j;
//	for (i = 6; i > 0; i--)
//	{
//		for (j = 6;j >= i; j--, ch++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = 'A';
//	char b = 'A';
//	char ch;
//	int blank,i,j,k;
//	printf("Please enter the letter you want to start with:");
//	scanf("%c", &ch);
//	
//	j = 0;
//
//	for (i=ch-a+1;i>0;i--)
//	{
//		blank = ch - b;
//		for (; blank > j; blank--)
//		{
//			printf(" ");
//		}
//		j++;
//		k = 0;
//		for (; k < j; k++)
//		{
//			printf("%c", a);
//			a++;
//		}
//		a--;
//		for (; k > 1; k--)
//		{
//			a--;
//			printf("%c", a);
//			
//		}
//
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int start, end, i;
//	printf("Please enter the start number:");
//	scanf("%d", &start);
//	printf("Please enter the end number:");
//	scanf("%d", &end);
//	printf("Ori       Squire    Cubic\n");
//	for (i=start; i <= end; i++)
//	{
//		printf("%-10d%-10d%-10d\n", i, i * i, i * i * i);
//	}
//	return 0;
//}

//int main()
//{
//	printf("Please enter a word:");
//	char word[30];
//	scanf("%s", word);
//	int i;
//	for (i = strlen(word) + 1; i >= 0; i--)
//	{
//		printf("%c", word[i]);
//	}
//	getchar();
//	getchar();
//	return 0;
//}

//int main()
//{
//	float a, b;
//	printf("Please enter two float fata(separated by blank):");
//	do
//	{
//		scanf("%f %f", &a, &b);
//		printf("The answer is %f",(a-b)/(a*b));
//	}
//	while(scanf("%f %f", &a, &b) != 2);
//	return 0;
//}

//float calc(float x, float y);
//int main()
//{
//	float x, y;
//	printf("Please enter the two float data(seprate by blank):");
//	while (scanf("%f %f", &x, &y))
//	{
//		printf("The answer is %f\n", calc(x, y));
//		printf("Please enter the two float data(seprate by blank):");
//	}
//	printf("Program end!");
//	return 0;
//}
//float calc(float x, float y)
//{
//	return (x - y) / (x * y);
//}

//int main()
//{
//	int big,small;
//	int sum = 0;
//
//	do
//	{
//		printf("Enter lower and upper integer limits:");
//		scanf("%d %d", &small, &big);
//		for (int i = small; i <= big; i++)
//			sum += i * i;
//		printf("The sum of the squares form %d to %d is %d", small * small, big * big, sum);
//	} while (small >= big);
//
//	return 0;
//}

int main()
{
	int num[8];
	int i;
	printf("Enter the 8 integer data(seperate by blank):");
	for (i = 0; i < 8; i++)
		scanf("%d", &num[i]);
	printf("The reverse data is");
	for (i = 7; i >= 0; i--)
		printf("%d", &num[i]);
	return 0;
}