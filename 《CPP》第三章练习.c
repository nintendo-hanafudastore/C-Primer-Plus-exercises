#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <float.h>
//#include <limits.h>//在这两个头文件中提前预设了常见数据类型的限制
//int main()
//{
//    int big_int = 2147483647;//有符号整形数据最大为2的31次方减1
//    float big_float = 3.4e38;//浮点型数据的最大值一般为3.4e38
//    float small_float = 10.0 / 3;
//    printf("%d\n", big_int + 1);//发生越界，输出-2147483638
//    printf("%f\n", big_float * 10);//浮点数最大数据乘十造成越界
//    printf("%f\n", small_float);//打印3.333333，精度缺失
//    printf("%f\n", FLT_MAX);//打印340282346638528859811704183484516925440.000000
//    printf("%ld\n", INT_MAX);//打印2147483647
//
//    return 0;
//}

//int main()
//{
//    int asc;
//    scanf("%d", &asc);
//    printf("The%d\'s char is%c", asc, asc);
//    return 0;
//}

//int main()
//{
//	printf("\a");
//	printf("Starled by the sudden sound,Sally shouted,\nBy the Great Pumpkin,what is that!");
//	return 0;
//}

//int main()
//{
//	float a;
//	printf("Enter a floating-point value:");
//	scanf("%f", &a);
//	printf("\nfixed-point notiction:%f",a);
//	printf("\nexponential notiction:%e",a);
//	printf("\np notiction:%a", a);//浮点类数据的p计数法的转换说明符用%a
//
//	scanf("%f", a);
//	
//	return 0;
//}

//#define SEC_PER_YEAR 3.156e7
//int main()
//{
//	int age;
//	printf("Please enter how old you are:");
//	scanf("%d", &age);
//	float second = age * SEC_PER_YEAR;
//	printf("It means you have lived %e seconds", second);
//	getchar();
//	getchar();
//	return 0;
//}

//#define INCH_TO_CM 2.54
//int main()
//{
//	float inch , cm;
//	printf("Please enter inch of your height:");
//	scanf("%f", &inch);
//	cm = INCH_TO_CM * inch;
//	printf("\nYour are %0.2f inch,or %0.2f cm", inch, cm);
//	return 0;
//}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
