#define _CRT_SECURE_NO_WARNINGS // Microsoft Visual Studio������ scanf ���� �ذ�
#include <stdio.h>
#include <Windows.h> // Sleep �Լ��� system �Լ��� ����ϱ� ���� ��ó����.
#include <conio.h> // gets,getch�� ����ϱ� ���� ��ó����.
#include <string.h> // ���ڿ� �� �Լ� strcmp�� ����ϱ� ���� ��ó����.

#define swap(temp, a, b) ((temp)=(a), (a)=(b), (b)=(temp)) // �迭�� ���Ҹ� ��ȯ���ִ� ��ũ�� �Լ�.

//�Լ��� ���� ����//
void Easter_egg();
void Shutdown_ee();
void Sorry_ee();
void Bubble_sort();
void Sort(int *arr, int cnt);
////////////////////

int main()
{
	int num;

	Easter_egg();
	
	Sleep(1000);
	system("cls");
again:
	printf("		===========================\n");
	printf("		Bubble Sort Program -10414-\n");
	printf("		===========================\n\n\n\n");
	printf("		[1 - ����]	[2 - ����]\n\n\n==> ");
	scanf("%d", &num);
	
	if (num == 1)
	{
		system("cls");
		Bubble_sort();
	}
	else if (num==2)
	{
		printf("���α׷��� �����մϴ�.\n");
		Sleep(1000);
		return 0;
	}
	else
	{
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
		Sleep(1000);
		system("cls");
		goto again;
	}
} // main �Լ�

void Easter_egg() // �ý��� �˴ٿ� �̽��Ϳ����Դϴ�. ���� �� "shutdown -a"�� �Է��Ͽ� �α׿����� ���������ּ���!
{
	int i;
	char str[20];
	char shutdown_a[20] = "shutdown -a";

	printf("--------------------------------\n");
	printf("Process exited after 1.115 seconds with return value 0\n");
	printf("����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .");

	getch();

	system("cls");
	printf("Running cmd");

	for (i = 0; i < 3; i++)
	{
		printf(".");
		Sleep(700);
	}

	system("cls");

	printf("Microsoft Windows [Version 10.0.14393]\n");
	printf("(c) 2016 Microsoft Corporation. All rights reserved.\n");
	printf("\nC:\\Windows\\system32>");

	Shutdown_ee();

	while (1)
	{
		printf("\nC:\\Windows\\system32>");
		gets(str);

		if (!strcmp(str, shutdown_a))
		{
			printf("\nC:\\Windows\\system32>");
			system("shutdown -a");
			Sorry_ee();
			break;
		}
		else
			printf("'%s'��(��) ���� �Ǵ� �ܺ� ���, ������ �� �ִ� ���α׷�, �Ǵ�\n��ġ ������ �ƴմϴ�.\n", str);
	}
}

void Shutdown_ee()
{
	Sleep(1500);
	printf("s");
	Sleep(200);
	printf("h");
	Sleep(200);
	printf("u");
	Sleep(200);
	printf("t");
	Sleep(200);
	printf("d");
	Sleep(200);
	printf("o");
	Sleep(200);
	printf("w");
	Sleep(200);
	printf("n");
	Sleep(100);
	printf(" ");
	Sleep(200);
	printf("-");
	Sleep(200);
	printf("s");
	Sleep(100);
	printf(" ");
	Sleep(200);
	printf("-");
	Sleep(200);
	printf("t");
	Sleep(100);
	printf(" ");
	Sleep(200);
	printf("3");
	Sleep(100);
	printf("0\n");
	system("shutdown -s -t 30");
}

void Sorry_ee()
{
	Sleep(100);
	printf("��");
	Sleep(100);
	printf("\b\b��");
	Sleep(100);
	printf("\b\b��");
	Sleep(100);
	printf("��");
	Sleep(100);
	printf("\b\b��");
	Sleep(100);
	printf("\b\b��");
	Sleep(100);
	printf("��");
	Sleep(100);
	printf("\b\b��");
	Sleep(100);
	printf("\b\b��");
	Sleep(100);
	printf(" ");
	Sleep(100);
	printf("��");
	Sleep(100);
	printf("\b\b��");
	Sleep(100);
	printf("\b\b��");
	Sleep(100);
	printf("��");
	Sleep(100);
	printf("\b\b��");
	Sleep(100);
	printf("\b\b��");
	Sleep(100);
	printf("��");
	Sleep(100);
	printf("\b\b��");
	Sleep(100);
	printf("\b\b��");
	Sleep(100);
	printf("��");
	Sleep(100);
	printf("\b\b��");
	Sleep(100);
	printf("��");
	Sleep(100);
	printf("\b\b�� ");
	Sleep(100);
	printf("��\n");
	Sleep(1000);
} // ����帳�ϴ�.

void Bubble_sort()
{
	int sort_num[10];
	int i,count=0;

	printf("���� ������ �ϱ� ���� ���� �Է����ּ���. (�ִ� 10��)\n\n");
	printf("(���� �׸� �Է��Ͻ÷��� 9999 �Է�)\n");
	printf("==> ");

	for(i=0;i<10;i++)
	{
		scanf("%d", &sort_num[i]);
		count++;
		if (count == 10)
		{
			Sort(sort_num, count);
			break;
		}
		if (sort_num[i] == 9999)
		{
			count--;
			Sort(sort_num, count);
			break;
		}
	}
}

void Sort(int *arr, int cnt)
{
	int i, j, temp, exchange=0, compare = 0;

	if (cnt == 0)
	{
		printf("�迭�� �Է¹��� ���Ұ� �����Ƿ� �����մϴ�.\n");
		return 0;
	}
	for (i = 0; i<cnt-1; i++)
	{
		printf("pass %d : ", i+1);
		for (j = 1; j<cnt-i; j++)
		{
			if (arr[j - 1]>arr[j])
			{
				swap(temp, arr[j - 1], arr[j]); // ��ũ�� �Լ� ȣ���� ���� ��ȯ.
				exchange++;
			}
			compare++;
		}

		for (j = 0; j<cnt; j++)
			printf("%d ", arr[j]);
		
		printf("�� Ƚ�� : %d / ��ȯ Ƚ�� : %d",compare,exchange);
		compare = 0, exchange = 0;
		printf("\n");
		Sleep(500);
	}

	printf("\nFinish : ");

	for (i = 0; i<cnt; i++)
		printf("%d ", arr[i]);

	printf("\n");
}