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

	printf("Введите номер задания:\t");
	scanf("%d", &n);

	switch (n)
	{

	case 1:
	{
		//1.	Составить расписание на неделю. Пользователь вводит порядковый номер дня недели и у него 
		//      на экране отображается, то, что запланировано на этот день.

		int a = 0;

		printf("Введите номер недели:\t");
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
			printf("Такого дня нет.\n");
		}
		break;
		}

	}
	break;

	default:
		break;

	case 2:
	{
		//2.	Дано целое число от 1 до 365. Определить, какой день недели выпадает на это число, 
		//      если 1 января – понедельник.

		int a = 0;

		printf("Введите число от 1 до 365:\t");
		scanf("%d", &a);

		switch (a % 7)
		{
		case 1:
			printf("Понедельник.\n");
			break;
		case 2:
			printf("Вторник.\n");
			break;
		case 3:
			printf("Среда.\n");
			break;
		case 4:
			printf("Четверг.\n");
			break;
		case 5:
			printf("Пятница.\n");
			break;
		case 6:
			printf("Суббота.\n");
			break;
		case 0:
			printf("Воскресенье.\n");
			break;

		}
	}
	break;

	case 3:
	{
		//3.	Дано трехзначное число. Определить: 
		// a.является ли сумма его цифр двухзначным числом;
		// b.является ли произведение его цифр трехзначным числом;

		int a = 0, a1, a2, a3;

		printf("Введите трехзначное число: \t");
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
				printf("Да сумма является двухзначным числом.\n");
			}
			else if (sum2 >= 100 && sum2 < 1000)
			{
				printf("Да произведение является  трехзначным числом\n");
			}
			else
			{
				printf("Нет.\n");
			}
		}
		else
		{
			printf("Число должно быть трехзначным.\n");
		}
	}
	break;

	case 4:
	{
		//4.	Рейтинг бакалавра заочного отделения при поступлении в магистратуру определяется 
		//средним баллом по диплому, умноженным на коэффициент стажа работы по специальности, 
		//который равен: нет стажа – 1, меньше 2 лет – 13, от 2 до 5 лет – 16. 
		//Составить программу расчета рейтинга при заданном среднем балле диплома (от 3 до 5) 
		//и вывести сообщение о приеме в магистратуру при проходном балле 45.

		int exp = 0, pass = 45;
		float average = 0, rating = 0;
		printf("Введите средний балл:\t");
		scanf("%f", &average);

		if (average >= 3 && average <= 5)
		{
			printf("Введите стаж работы:\t");
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
			printf("Средний балл должен быть от 3 до 5.\n");
	}
	break;

	case 6:
	{
		//	6.	Ввести число от 1 до 31. Определить ближайшую (следующую) дату полнолуния или 
		//новолуния (лунных месяц содержит 28 дней), если последнее полнолуние было 27 августа.
		int date = 0, x = 31, pl = 0, nl = 0;

		printf("Введите число от 1 до 31.\n");
		scanf("%d", &date);
		if (date >= 1 && date <= 31)
		{
			printf("Последнее полнолуние было 27 августа.\n");
			nl = abs(x - 27 - 14);
			pl = abs(x - 27 - 28);

			if (date < nl)
				printf("Следуещее новолуние = %d\n", nl);
			else if (date > nl && date < pl)
				printf("Следующте полнолуние = %d\n", pl);
			else if (date == nl)
				printf("Новолуние сегодня! %d\n", nl);
			else if (date == pl)
				printf("Полнолуние сегодня! %d\n", pl);
		}
		else
		{
			printf("Введите число от 1 до 31.\n");
		}
	}
	break;

	case 7:
	{
		//1.	Написать программу, которая по коду города и длительности переговоров вычисляет 
		//их стоимость и результат выводит на экран: Алматы-код 7272, 25тенге; 
		//Шымкент-код 7252, 18тенге; Астана-код 7172 13тенге; Актау-код 7292, 11тенге.
		float time = 0, total = 0;
		int code = 0;
		printf("Введите длительность переговоров:");
		scanf("%f", &time);
		printf("Введите код города:");
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
		printf("Ваша стоимость разговора составляет: %f\n", total);

	}
	break;

	case 8:
	{
		//2.	Написать программу, которая в зависимости от характера ветра выдает сообщение о его 
		//скорости от 1до 4 м/с - слабый (1); от 5-10 м/c умеренный (2); от 9-18 м/c - сильный (3); 
		//больше 19 м/c - ураганный (4).
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
		//3.	Почтовый автомат предлагает поздравительные открытки на три темы 
		//(1Новогодние, 2 - С Днем Рождения, 3 - С Днем Защитника Отечества) 
		//в трех вариантах (a, b, c) по цене 2 тенге.  Ввести с клавиатуры номер темы, 
		//вариант, и купюру оплаты (5,10, 20 тенге). Выдать нужную открытку 
		//(сообщение, например: «Новогодние, вариант с», а также сдачу (купюрами 1,2,5,10) 
		//с виде сообщения, например, «2тн+1тн». Предусмотреть обработку неправильного номера или варианта.
		int theme = 0, price = 0;
		char var;

		printf("Введите номер темы:");
		scanf("%d", &theme);

		cin.get();
		printf("Введите вариант (a, b, c):");
		scanf("%c", &var);

		printf("Введите купюру оплаты (5,10, 20 тенге):");
		scanf("%d", &price);

		if (theme == 1)
			printf("Новогодние, вариант %c", var);
		else if (theme == 2)
			printf("С Днем Рождения, вариант %c", var);
		else if (theme == 3)
			printf("С Днем Защитника Отечества, вариант %c", var);
		if (price == 5)
			printf(", сдача 2тн+1тн.\n");
		else if (price == 10)
			printf(", сдача 5тн+2тн+1тн.\n");
		else if (price == 20)
			printf(", сдача 10тн+5тн+2тн+1тн.\n");
	}
	break;
	case 10:
	{
		//3.	Необходимо написать программу, которая проверяет пользователя на знание таблицы умножения. 
		//Пользователь сам вводит два целых однозначных числа. Программа задаёт вопрос: результат умножения
		//первого числа на второе. Пользователь должен ввести ответ и увидеть на экране правильно 
		//он ответил или нет. Если нет – показать еще и правильный результат
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

			printf("Итого правильных ");
			SetConsoleTextAttribute(hConsole, 4);
			printf("%d", countTrue);
			SetConsoleTextAttribute(hConsole, 15);
			printf(", неправильных ");
			SetConsoleTextAttribute(hConsole, 2);
			printf("%d\n", countFalse);
			SetConsoleTextAttribute(hConsole, 15);
		}

	}
	break;
	case 11:
	{
		//4.	Написать программу , которая по дате рождения (день d месяц n) определяет знак Зодиака: 
		//с 22 марта по 21 апреля - Овен (4); с 22 апреля по 21 мая - Телец (5); с 22 мая по 21 июня -
		//Близнецы (6); с 22 июня по 21 июля - Рак (7); с 22 июля по 21 августа - Лев (8); с 22 августа 
		//по 21 сентября - Дева (9); 22 сентября по 21 октября - Весы (10); с 22 октября по 21 ноября - 
		//Скорпион (11); с 22 ноября по 21 декабря - Стрелец (12); с 22 декабря по 21 января - Козерог 
		//(1); 22 января по 21 февраля - Водолей (2); с 22 февраля по 21 марта - Рыбы (3).
		int d = 0, n = 0;

		printf("Введите дату:");
		scanf("%d", &d);
		printf("Введите месяц:");
		scanf("%d", &n);
		if ((n == 3 && d >= 22) || (n == 4 && d <= 21))
		{
			printf("Овен.\n");
		}
		else if ((n == 4 && d >= 22) || (n == 5 && d <= 21))
		{
			printf("Телец.\n");
		}
		else if ((n == 5 && d >= 22) || (n == 6 && d <= 21))
		{
			printf("Близнецы.\n");
		}
		else if ((n == 6 && d >= 22) || (n == 7 && d <= 21))
		{
			printf("Рак.\n");
		}
		else if ((n == 7 && d >= 22) || (n == 8 && d <= 21))
		{
			printf("Лев.\n");
		}
		else if ((n == 8 && d >= 22) || (n == 9 && d <= 21))
		{
			printf("Дева.\n");
		}
		else if ((n == 9 && d >= 22) || (n == 10 && d <= 21))
		{
			printf("Весы.\n");
		}
		else if ((n == 10 && d >= 22) || (n == 11 && d <= 21))
		{
			printf("Скорпион.\n");
		}
		else if ((n == 11 && d >= 22) || (n == 12 && d <= 21))
		{
			printf("Стрелец.\n");
		}
		else if ((n == 12 && d >= 22) || (n == 1 && d <= 21))
		{
			printf("Козерог.\n");
		}
		else if ((n == 1 && d >= 22) || (n == 2 && d <= 21))
		{
			printf("Водолей.\n");
		}
		else if ((n == 2 && d >= 22) || (n == 3 && d <= 21))
		{
			printf("Рыбы.\n");
		}


	}
	break;

	}

	goto start;
}