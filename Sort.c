#define _CRT_SECURE_NO_WARNINGS // Microsoft Visual Studio에서의 scanf 오류 해결
#include <stdio.h>
#include <Windows.h> // Sleep 함수와 system 함수를 사용하기 위한 전처리문.
#include <conio.h> // gets,getch를 사용하기 위한 전처리문.
#include <string.h> // 문자열 비교 함수 strcmp를 사용하기 위한 전처리문.

#define swap(temp, a, b) ((temp)=(a), (a)=(b), (b)=(temp)) // 배열의 원소를 교환해주는 매크로 함수.

//함수의 원형 선언//
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
	printf("		[1 - 실행]	[2 - 종료]\n\n\n==> ");
	scanf("%d", &num);
	
	if (num == 1)
	{
		system("cls");
		Bubble_sort();
	}
	else if (num==2)
	{
		printf("프로그램을 종료합니다.\n");
		Sleep(1000);
		return 0;
	}
	else
	{
		printf("잘못 입력하셨습니다.\n");
		Sleep(1000);
		system("cls");
		goto again;
	}
} // main 함수

void Easter_egg() // 시스템 셧다운 이스터에그입니다. 실행 후 "shutdown -a"를 입력하여 로그오프를 중지시켜주세요!
{
	int i;
	char str[20];
	char shutdown_a[20] = "shutdown -a";

	printf("--------------------------------\n");
	printf("Process exited after 1.115 seconds with return value 0\n");
	printf("계속하려면 아무 키나 누르십시오 . . .");

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
			printf("'%s'은(는) 내부 또는 외부 명령, 실행할 수 있는 프로그램, 또는\n배치 파일이 아닙니다.\n", str);
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
	printf("ㅅ");
	Sleep(100);
	printf("\b\b서");
	Sleep(100);
	printf("\b\b선");
	Sleep(100);
	printf("ㅅ");
	Sleep(100);
	printf("\b\b새");
	Sleep(100);
	printf("\b\b생");
	Sleep(100);
	printf("ㄴ");
	Sleep(100);
	printf("\b\b니");
	Sleep(100);
	printf("\b\b님");
	Sleep(100);
	printf(" ");
	Sleep(100);
	printf("ㅈ");
	Sleep(100);
	printf("\b\b조");
	Sleep(100);
	printf("\b\b죄");
	Sleep(100);
	printf("ㅅ");
	Sleep(100);
	printf("\b\b소");
	Sleep(100);
	printf("\b\b송");
	Sleep(100);
	printf("ㅎ");
	Sleep(100);
	printf("\b\b하");
	Sleep(100);
	printf("\b\b합");
	Sleep(100);
	printf("ㄴ");
	Sleep(100);
	printf("\b\b니");
	Sleep(100);
	printf("ㄷ");
	Sleep(100);
	printf("\b\b다 ");
	Sleep(100);
	printf("♥\n");
	Sleep(1000);
} // 사과드립니다.

void Bubble_sort()
{
	int sort_num[10];
	int i,count=0;

	printf("버블 정렬을 하기 위한 값을 입력해주세요. (최대 10개)\n\n");
	printf("(값을 그만 입력하시려면 9999 입력)\n");
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
		printf("배열에 입력받은 원소가 없으므로 종료합니다.\n");
		return 0;
	}
	for (i = 0; i<cnt-1; i++)
	{
		printf("pass %d : ", i+1);
		for (j = 1; j<cnt-i; j++)
		{
			if (arr[j - 1]>arr[j])
			{
				swap(temp, arr[j - 1], arr[j]); // 매크로 함수 호출을 통한 교환.
				exchange++;
			}
			compare++;
		}

		for (j = 0; j<cnt; j++)
			printf("%d ", arr[j]);
		
		printf("비교 횟수 : %d / 교환 횟수 : %d",compare,exchange);
		compare = 0, exchange = 0;
		printf("\n");
		Sleep(500);
	}

	printf("\nFinish : ");

	for (i = 0; i<cnt; i++)
		printf("%d ", arr[i]);

	printf("\n");
}