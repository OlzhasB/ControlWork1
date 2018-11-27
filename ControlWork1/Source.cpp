#include<locale.h>
#include<stdio.h>
#include<iostream>

int main()
{
	/*Task1
	setlocale(LC_ALL, "");

	printf("Название:     Война и Мир\n");
	printf("Автор:        Л. Н. Толстой\n");
	printf("Издательство: Питер\n");
	printf("Страниц:      500\n");

	system("pause");
	*/

	/*Task2
	setlocale(LC_ALL, "");

	printf("Название:     PP-12-1\n");
	printf("Создатель:    Студент\n");
	printf("Размер:       50 МБ\n");
	printf("Расположение: D:\\Academy\\PP-12-1\n");

	system("pause");
	*/


	/*Task 3
	setlocale(LC_ALL, "");

	int N;

	printf("Введите N: ");
	scanf_s("%d", &N);

	if ((N % 3) != 0 &&  N % 7 == 0)
	{
		printf ("Истина\n");
	}

	if (N % 4 != 0 &&  N % 5 != 0)
	{
		printf ("Истина\n");
	}

	if (N % 8 == 0 && N % 11 == 0)
	{
		printf ("Истина\n");
	}

	else
	{
		printf ("Ложь\n");
	}

	system("pause");

	*/

	/*Task 4
	setlocale(LC_ALL, "");

	int p;
	float ps;

	printf("Введите стоимость покупки: ");
	scanf_s("%d", &p);

	if (p > 400 and p < 600)
	{
		ps = p * 0.95;
	}

	if (p > 600 and p < 1000)
	{
		ps = p * 0.9;

	}

	printf("Стоимость со скидкой: %f\n", ps);

	system("pause");
	*/

	/*Task 5
	setlocale(LC_ALL, "");

	int s, r, p;
	float r1;

	printf("Введите себестоимость за прошлый месяц: ");
	scanf_s("%d", &s);

	printf("Введите прибыль за прошлый месяц: ");
	scanf_s("%d", &p);

	r = (p  * 100) / s;
	r1 = r * 0.95;

	printf("Рентабельность за месяц: %f\n", r1);

	system("pause");
	*/


	/*Task 6
	setlocale(LC_ALL, "");

	int k, ch, m;

	printf("Введите количество секунд: ");
	scanf_s("%d", &k);

	m = k / 60;
	ch = m / 60;

	printf("Сейчас: %d часов и %d минут\n", ch, m);

	system("pause");
	*/

	/* Task 7
	setlocale(LC_ALL, "");

	int a, b;

	printf("Введите a: ");
	scanf_s("%d", &a);

	printf("Введите b: ");
	scanf_s("%d", &b);

	if (a > 10 && a < 100 && a % 2 == 0)
	{
		printf("Число а - четное двузначное\n");
	}

	if ((a % 2 != 0 && b % 2 == 0) or (b % 2 != 0 && a % 2 == 0))
	{
		printf("Только одно число нечетное\n");
	}
	
	if (a % 2 != 0 && b % 2 != 0) 
	{
		printf("Каждое из чисел а и b нечетное\n");
	}

	system("pause");
	*/

	/*Task 8
	setlocale(LC_ALL, "");

	int n;

	printf("Введите n: ");
	scanf_s("%d", &n);


	if (n % 2 == 0 && n % 7 == 0 && n % 11 != 0 && n % 13 != 0)
	{
		printf("Истина\n");
	}

	else
	{
		printf("Ложь");
	}

	system("pause");
	*/
	
	/*Task 10
	   setlocale(LC_ALL, "");
	int t, dt, s, d, ts;
	

	printf("Введите время разговора: ");
	scanf_s("%d", &t);

	printf("Продолжительность разговора в минутах: ");
	scanf_s("%d", &dt);

	printf("стоимость минуты разговора: ");
	scanf_s("%d", &s);

	printf("День недели от 1 до 7: ");
	scanf_s("%d", &d);

	ts = s * dt;

	if ((t > 8 && t < 22) && (d > 5 && d < 8))
	{
		ts = ts * 0.7;
		printf("Стоимость разговора: %d\n", ts);
	}

	if (t > 8 && t < 22)
	{
		ts = ts * 0.8;
		printf("Стоимость разговора: %d\n", ts);
	}

	if (d > 5 && d < 8)
	{
		ts = ts * 0.9;
		printf("Стоимость разговора: %d\n", ts);
	}

	else
	{
		printf("Стоимость разговора: %f\n", ts);
	}

	system("pause");
	*/
	
}