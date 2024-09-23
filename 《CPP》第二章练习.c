#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int inch = 0;
	scanf("%d", &inch);
	float cm = 2.54 * inch;
	printf("%f", cm);
	return 0;
}

int main()
{
	printf("Gustav Mahler\n");
	printf("Gustav\nMahler\n");
	printf("Gustav");
	printf("Mahler");
	return 0;
}

int main()
{
	printf("MaZexu Shaanxi XI'AN");
	return 0;
}

int main()
{
	int age = 0;
	scanf("%d", &age);
	int days = age * 365;
	printf("%d", days);
	return 0;
}

void jolly(void);
void deny(void);
int main()
{
	jolly();
	jolly();
	jolly();
	deny();
	return 0;
}
void jolly(void)
{
	printf("For he's a jolly good felllow!\n");
}
void deny(void)
{
	printf("Which nobody can deny!");
}

void br();
void ic();
int main()
{
	br();
	printf(",");
	ic();
	printf("\n");
	ic();
	printf("\n");
	br();
	return 0;
}
void br()
{
	printf("Brazil,Russia");
}
void ic()
{
	printf("India,China");
}

int main()
{
	int toes = 10;
	int a = toes * 2;
	int b = toes * toes;
	printf("toes=%d\ntoes*2=%d\ntoes^2=%d", toes, a, b);
	return 0;
}

void haha(void);
int main(void)
{
	haha();
	haha();
	haha();
	printf("\n");
	haha();
	haha();
	printf("\n");
	haha();
}
void haha(void)
{
	printf("smile!");
}

void one_three();
void two();
int main()
{
	printf("starting now:\n");
	one_three();
	printf("\ndone!");
}
void one_three()
{
	printf("one\n");
	two();
	printf("\nthree");
}
void two()
{
		printf("two");
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件