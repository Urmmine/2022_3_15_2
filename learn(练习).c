#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//n的阶乘

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}



//1加至n的阶乘

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//改进

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		ret *= j;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}







//1加至10的阶乘

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		//每次都将ret初始为1
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//改进

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//有序数组中查找某个数字n
//二分查找

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//在arr这个有序数组中查找k的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		//每次循环都求一次mid
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//渐变效果

#include <windows.h> 

//int main()
//{
//	char arr1[] = "welcome to bit !!!!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休眠一秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//登录三次密码

//int main()
//{
//	int i = 0;
//	//假设正确的密码是字符串"123456"
//
//	char password[20] = { 0 };
//	//password数组名本就是地址
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		//if (password == "123456")//err - 两个字符串的比较不能使用==，应该使用strcmp
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序\n");
//	}
//	return 0;
//}



//猜数字游戏
//1.自动产生一个1-100之间的随机数
//2.猜数字
// a.猜对了，恭喜你
// b.猜错了，告诉你猜大了猜小了，继续猜，直到猜对为止
//3.游戏可以一直玩，除非退出游戏


#include <stdlib.h>
void menu()
{
	printf("*************************\n");
	printf("********* 1.paly ********\n");
	printf("********* 0.exit ********\n");
	printf("*************************\n");
}

#include <time.h>
void game()
{
	//猜数字游戏的实现
	//1.生成随机数
	//rand函数返回了一个0-32767之间的整数
	//时间 - 时间戳 库函数time
	//srand((unsigned int)time(NULL));//放进主函数，只调用一次
	
	int ret = rand() % 100 + 1;//%100的余数是0-99，然后+1，范围就是1-100
	//printf("%d\n",ret);
	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请输入数字;>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}






