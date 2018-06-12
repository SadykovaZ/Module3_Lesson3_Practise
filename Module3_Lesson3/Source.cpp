#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include <iostream>
#include <Windows.h>

using namespace std;

void main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n = 0;
	SetConsoleTextAttribute(hConsole, 15);
start:

	printf("������� ����� �������:\t");
	scanf("%d", &n);

	switch (n)
	{

	case 1:
	{
		//1.	��������� ���������� �� ������. ������������ ������ ���������� ����� ��� ������ � � ���� 
		//      �� ������ ������������, ��, ��� ������������� �� ���� ����.

		int a = 0;

		printf("������� ����� ������:\t");
		scanf("%d", &a);

		switch (a)
		{

		case 1:
		case 2:
		{
			printf("Study at home.\n");
		}

		break;

		case 3:
		case 4:
		{
			printf("Meeting with friends!\n");
		}

		break;

		case 5:
		case 6:
		{
			printf("Visiting parents.\n");

		}

		break;

		case 7:
		{
			printf("Relax at home.\n");
		}

		break;
		default:
		{
			printf("������ ��� ���.\n");
		}
		break;
		}

	}
	break;

	default:
		break;

	case 2:
	{
		//2.	���� ����� ����� �� 1 �� 365. ����������, ����� ���� ������ �������� �� ��� �����, 
		//      ���� 1 ������ � �����������.

		int a = 0;

		printf("������� ����� �� 1 �� 365:\t");
		scanf("%d", &a);

		switch (a % 7)
		{
		case 1:
			printf("�����������.\n");
			break;
		case 2:
			printf("�������.\n");
			break;
		case 3:
			printf("�����.\n");
			break;
		case 4:
			printf("�������.\n");
			break;
		case 5:
			printf("�������.\n");
			break;
		case 6:
			printf("�������.\n");
			break;
		case 0:
			printf("�����������.\n");
			break;

		}
	}
	break;

	case 3:
	{
		//3.	���� ����������� �����. ����������: 
		// a.�������� �� ����� ��� ���� ����������� ������;
		// b.�������� �� ������������ ��� ���� ����������� ������;

		int a = 0, a1, a2, a3;

		printf("������� ����������� �����: \t");
		scanf("%d", &a);

		if (a >= 100 && a < 1000)
		{
			a1 = a % 10;
			a2 = (a % 100) / 10;
			a3 = a / 100;

			printf("a1=%d, a2=%d, a3=%d\n", a1, a2, a3);

			int sum = a1 + a2 + a3;
			int sum2 = a1 * a2 * a3;




			if (sum >= 10 && sum < 100)
			{
				printf("�� ����� �������� ����������� ������.\n");
			}
			else if (sum2 >= 100 && sum2 < 1000)
			{
				printf("�� ������������ ��������  ����������� ������\n");
			}
			else
			{
				printf("���.\n");
			}
		}
		else
		{
			printf("����� ������ ���� �����������.\n");
		}
	}
	break;

	case 4:
	{
		//4.	������� ��������� �������� ��������� ��� ����������� � ������������ ������������ 
		//������� ������ �� �������, ���������� �� ����������� ����� ������ �� �������������, 
		//������� �����: ��� ����� � 1, ������ 2 ��� � 13, �� 2 �� 5 ��� � 16. 
		//��������� ��������� ������� �������� ��� �������� ������� ����� ������� (�� 3 �� 5) 
		//� ������� ��������� � ������ � ������������ ��� ��������� ����� 45.

		int exp = 0, pass = 45;
		float average = 0, rating = 0;
		printf("������� ������� ����:\t");
		scanf("%f", &average);

		if (average >= 3 && average <= 5)
		{
			printf("������� ���� ������:\t");
			scanf("%d", &exp);

			if (exp == 0)
				rating = average * 1;
			else if (exp < 2)
				rating = average * 13;
			else if (exp >= 2 && exp <= 5)
				rating = average * 16;

			printf("rating = %f\n", rating);
			if (rating >= pass)
				printf("Accept.\n");
			else
				printf("No.\n");
		}
		else
			printf("������� ���� ������ ���� �� 3 �� 5.\n");
	}
	break;

	case 6:
	{
		//	6.	������ ����� �� 1 �� 31. ���������� ��������� (���������) ���� ���������� ��� 
		//��������� (������ ����� �������� 28 ����), ���� ��������� ���������� ���� 27 �������.
		int date = 0, x = 31, pl = 0, nl = 0;

		printf("������� ����� �� 1 �� 31.\n");
		scanf("%d", &date);
		if (date >= 1 && date <= 31)
		{
			printf("��������� ���������� ���� 27 �������.\n");
			nl = abs(x - 27 - 14);
			pl = abs(x - 27 - 28);

			if (date < nl)
				printf("��������� ��������� = %d\n", nl);
			else if (date > nl && date < pl)
				printf("��������� ���������� = %d\n", pl);
			else if (date == nl)
				printf("��������� �������! %d\n", nl);
			else if (date == pl)
				printf("���������� �������! %d\n", pl);
		}
		else
		{
			printf("������� ����� �� 1 �� 31.\n");
		}
	}
	break;

	case 7:
	{
		//1.	�������� ���������, ������� �� ���� ������ � ������������ ����������� ��������� 
		//�� ��������� � ��������� ������� �� �����: ������-��� 7272, 25�����; 
		//�������-��� 7252, 18�����; ������-��� 7172 13�����; �����-��� 7292, 11�����.
		float time = 0, total = 0;
		int code = 0;
		printf("������� ������������ �����������:");
		scanf("%f", &time);
		printf("������� ��� ������:");
		scanf("%d", &code);
		switch (code)
		{
		case 7272:
			total = time * 25;
			break;
		case 7252:
			total = time * 18;
			break;
		case 7172:
			total = time * 13;
			break;
		case 7292:
			total = time * 11;
			break;
		default:
			total = time * 120;
		}
		printf("���� ��������� ��������� ����������: %f\n", total);

	}
	break;

	case 8:
	{
		//2.	�������� ���������, ������� � ����������� �� ��������� ����� ������ ��������� � ��� 
		//�������� �� 1�� 4 �/� - ������ (1); �� 5-10 �/c ��������� (2); �� 9-18 �/c - ������� (3); 
		//������ 19 �/c - ��������� (4).
		float wind = 0;
		wind = (float)(1 + rand() % 1000) / (1 + rand() % 10);

		printf("Wind power = %f\n", wind);
		if (wind >= 1 && wind <= 4)
			printf("Weak.\n");
		else if (wind >= 5 && wind <= 10)
			printf("Middle.\n");
		else if (wind >= 9 && wind <= 18)
			printf("Strong.\n");
		else if (wind >= 19)
			printf("Hurricane!\n");
	}
	break;

	case 9:
	{
		//3.	�������� ������� ���������� ��������������� �������� �� ��� ���� 
		//(1����������, 2 - � ���� ��������, 3 - � ���� ��������� ���������) 
		//� ���� ��������� (a, b, c) �� ���� 2 �����.  ������ � ���������� ����� ����, 
		//�������, � ������ ������ (5,10, 20 �����). ������ ������ �������� 
		//(���������, ��������: �����������, ������� �, � ����� ����� (�������� 1,2,5,10) 
		//� ���� ���������, ��������, �2��+1��. ������������� ��������� ������������� ������ ��� ��������.
		int theme = 0, price = 0;
		char var;

		printf("������� ����� ����:");
		scanf("%d", &theme);

		cin.get();
		printf("������� ������� (a, b, c):");
		scanf("%c", &var);

		printf("������� ������ ������ (5,10, 20 �����):");
		scanf("%d", &price);

		if (theme == 1)
			printf("����������, ������� %c", var);
		else if (theme == 2)
			printf("� ���� ��������, ������� %c", var);
		else if (theme == 3)
			printf("� ���� ��������� ���������, ������� %c", var);
		if (price == 5)
			printf(", ����� 2��+1��.\n");
		else if (price == 10)
			printf(", ����� 5��+2��+1��.\n");
		else if (price == 20)
			printf(", ����� 10��+5��+2��+1��.\n");
	}
	break;
	case 10:
	{
		//3.	���������� �������� ���������, ������� ��������� ������������ �� ������ ������� ���������. 
		//������������ ��� ������ ��� ����� ����������� �����. ��������� ����� ������: ��������� ���������
		//������� ����� �� ������. ������������ ������ ������ ����� � ������� �� ������ ��������� 
		//�� ������� ��� ���. ���� ��� � �������� ��� � ���������� ���������
		int a = 0, b = 0;
		int countTrue = 0, countFalse = 0, numExam = 1;
		int result = 0;
	start2:
		a = 1 + rand() % 9;
		b = 1 + rand() % 9;

		printf("%d) %d * %d = ", numExam, a, b);
		scanf("%d", &result);

		int mresult = a*b;
		if (result == mresult)
			countTrue++;
		else
			countFalse++;

		numExam++;
		if (numExam <= 10)
			goto start2;
		else
		{
			printf("-----------------------------------\n");

			printf("����� ���������� ");
			SetConsoleTextAttribute(hConsole, 4);
			printf("%d", countTrue);
			SetConsoleTextAttribute(hConsole, 15);
			printf(", ������������ ");
			SetConsoleTextAttribute(hConsole, 2);
			printf("%d\n", countFalse);
			SetConsoleTextAttribute(hConsole, 15);
		}

	}
	break;
	case 11:
	{
		//4.	�������� ��������� , ������� �� ���� �������� (���� d ����� n) ���������� ���� �������: 
		//� 22 ����� �� 21 ������ - ���� (4); � 22 ������ �� 21 ��� - ����� (5); � 22 ��� �� 21 ���� -
		//�������� (6); � 22 ���� �� 21 ���� - ��� (7); � 22 ���� �� 21 ������� - ��� (8); � 22 ������� 
		//�� 21 �������� - ���� (9); 22 �������� �� 21 ������� - ���� (10); � 22 ������� �� 21 ������ - 
		//�������� (11); � 22 ������ �� 21 ������� - ������� (12); � 22 ������� �� 21 ������ - ������� 
		//(1); 22 ������ �� 21 ������� - ������� (2); � 22 ������� �� 21 ����� - ���� (3).
		int d = 0, n = 0;

		printf("������� ����:");
		scanf("%d", &d);
		printf("������� �����:");
		scanf("%d", &n);
		if ((n == 3 && d >= 22) || (n == 4 && d <= 21))
		{
			printf("����.\n");
		}
		else if ((n == 4 && d >= 22) || (n == 5 && d <= 21))
		{
			printf("�����.\n");
		}
		else if ((n == 5 && d >= 22) || (n == 6 && d <= 21))
		{
			printf("��������.\n");
		}
		else if ((n == 6 && d >= 22) || (n == 7 && d <= 21))
		{
			printf("���.\n");
		}
		else if ((n == 7 && d >= 22) || (n == 8 && d <= 21))
		{
			printf("���.\n");
		}
		else if ((n == 8 && d >= 22) || (n == 9 && d <= 21))
		{
			printf("����.\n");
		}
		else if ((n == 9 && d >= 22) || (n == 10 && d <= 21))
		{
			printf("����.\n");
		}
		else if ((n == 10 && d >= 22) || (n == 11 && d <= 21))
		{
			printf("��������.\n");
		}
		else if ((n == 11 && d >= 22) || (n == 12 && d <= 21))
		{
			printf("�������.\n");
		}
		else if ((n == 12 && d >= 22) || (n == 1 && d <= 21))
		{
			printf("�������.\n");
		}
		else if ((n == 1 && d >= 22) || (n == 2 && d <= 21))
		{
			printf("�������.\n");
		}
		else if ((n == 2 && d >= 22) || (n == 3 && d <= 21))
		{
			printf("����.\n");
		}


	}
	break;

	}

	goto start;
}