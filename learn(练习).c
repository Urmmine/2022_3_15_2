#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//n�Ľ׳�

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



//1����n�Ľ׳�

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

//�Ľ�

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







//1����10�Ľ׳�

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		//ÿ�ζ���ret��ʼΪ1
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//�Ľ�

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



//���������в���ĳ������n
//���ֲ���

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//��arr������������в���k��ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		//ÿ��ѭ������һ��mid
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//����Ч��

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
//		Sleep(1000);//����һ��
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//��¼��������

//int main()
//{
//	int i = 0;
//	//������ȷ���������ַ���"123456"
//
//	char password[20] = { 0 };
//	//password�����������ǵ�ַ
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		//if (password == "123456")//err - �����ַ����ıȽϲ���ʹ��==��Ӧ��ʹ��strcmp
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("���������������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����\n");
//	}
//	return 0;
//}



//��������Ϸ
//1.�Զ�����һ��1-100֮��������
//2.������
// a.�¶��ˣ���ϲ��
// b.�´��ˣ�������´��˲�С�ˣ������£�ֱ���¶�Ϊֹ
//3.��Ϸ����һֱ�棬�����˳���Ϸ


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
	//��������Ϸ��ʵ��
	//1.���������
	//rand����������һ��0-32767֮�������
	//ʱ�� - ʱ��� �⺯��time
	//srand((unsigned int)time(NULL));//�Ž���������ֻ����һ��
	
	int ret = rand() % 100 + 1;//%100��������0-99��Ȼ��+1����Χ����1-100
	//printf("%d\n",ret);
	//2.������
	int guess = 0;
	while (1)
	{
		printf("����������;>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
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
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}






