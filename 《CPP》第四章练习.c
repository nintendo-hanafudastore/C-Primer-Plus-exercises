#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char name[20];
	float cash = 123.45;
	scanf("%s", name);
	printf("The %s family just may be $%5.2f dollars richer!", name, cash);

	return 0;
}

int main()
{
	printf("Please enter your full name:\n");
	char first_name[20];
	char last_name[20];
	scanf("%s %s", first_name, last_name);
	printf("Oh,now I know your name is %s %s\n", first_name, last_name);
	printf("\"%20s\"\n", first_name);
	printf("\"%-20s\"", last_name);
	return 0;
}

int main()
{
	float a = 0;
	scanf("%f", &a);
	printf("The input is %.1f or %0.1e", a, a);
	printf("\nThe input is %.3f or %0.3e", a, a);
	getchar();
	getchar();
	return 0;
}

int main()
{
	float rate = 0, file = 0;
	printf("Please enter your download rate and the file you want to download:\n");
	scanf("%f %f", &rate, &file);
	float time = file / rate;
	printf("You will download tis file in %0.2f seconds.", time);
	return 0;
}

int main()
{
	char first_name[20];
	char last_name[20];
	printf("Please enter your name:\n");
	scanf("%s %s", first_name, last_name);
	printf("%s %s\n", first_name, last_name);
	printf("%*d %*d", strlen(first_name), strlen(first_name), strlen(last_name), strlen(last_name));
	return 0;
}

#include<float.h>
int main()
{
	double a = 1.0 / 3.0;
	float b = 1.0 / 3.0;
	printf("%.6f\n", a);
	printf("%.12f\n", a);
	printf("%.16f\n", a);
	printf("%.6f\n", b);
	printf("%.12f\n", b);
	printf("%.16f\n", b);
	printf("%d\n", FLT_DIG);
	printf("%d", DBL_DIG);

	return 0;
}

#define GALLON_TO_LITRE 3.785
#define MILE_TO_KM 1.609
int main()
{
	float range, oil;
	printf("Please input you trsveled(in mile):");
	scanf("%f", &range);
	printf("Please iput the oil you spend(in gallon)");
	scanf("%f",&oil);
	printf("In USA,your oil wear is %0.1fM/G", range / oil);
	printf("\nIn Europe,your oil is %0.1fL/KM", (oil * GALLON_TO_LITRE * 100) / (range * MILE_TO_KM));
	return 0;
}