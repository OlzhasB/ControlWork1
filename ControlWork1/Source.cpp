#include<locale.h>
#include<stdio.h>
#include<iostream>

int main()
{
	/*Task1
	setlocale(LC_ALL, "");

	printf("��������:     ����� � ���\n");
	printf("�����:        �. �. �������\n");
	printf("������������: �����\n");
	printf("�������:      500\n");

	system("pause");
	*/

	/*Task2
	setlocale(LC_ALL, "");

	printf("��������:     PP-12-1\n");
	printf("���������:    �������\n");
	printf("������:       50 ��\n");
	printf("������������: D:\\Academy\\PP-12-1\n");

	system("pause");
	*/


	/*Task 3
	setlocale(LC_ALL, "");

	int N;

	printf("������� N: ");
	scanf_s("%d", &N);

	if ((N % 3) != 0 &&  N % 7 == 0)
	{
		printf ("������\n");
	}

	if (N % 4 != 0 &&  N % 5 != 0)
	{
		printf ("������\n");
	}

	if (N % 8 == 0 && N % 11 == 0)
	{
		printf ("������\n");
	}

	else
	{
		printf ("����\n");
	}

	system("pause");

	*/

	/*Task 4
	setlocale(LC_ALL, "");

	int p;
	float ps;

	printf("������� ��������� �������: ");
	scanf_s("%d", &p);

	if (p > 400 and p < 600)
	{
		ps = p * 0.95;
	}

	if (p > 600 and p < 1000)
	{
		ps = p * 0.9;

	}

	printf("��������� �� �������: %f\n", ps);

	system("pause");
	*/

	/*Task 5
	setlocale(LC_ALL, "");

	int s, r, p;
	float r1;

	printf("������� ������������� �� ������� �����: ");
	scanf_s("%d", &s);

	printf("������� ������� �� ������� �����: ");
	scanf_s("%d", &p);

	r = (p  * 100) / s;
	r1 = r * 0.95;

	printf("�������������� �� �����: %f\n", r1);

	system("pause");
	*/


	/*Task 6
	setlocale(LC_ALL, "");

	int k, ch, m;

	printf("������� ���������� ������: ");
	scanf_s("%d", &k);

	m = k / 60;
	ch = m / 60;

	printf("������: %d ����� � %d �����\n", ch, m);

	system("pause");
	*/

	/* Task 7
	setlocale(LC_ALL, "");

	int a, b;

	printf("������� a: ");
	scanf_s("%d", &a);

	printf("������� b: ");
	scanf_s("%d", &b);

	if (a > 10 && a < 100 && a % 2 == 0)
	{
		printf("����� � - ������ ����������\n");
	}

	if ((a % 2 != 0 && b % 2 == 0) or (b % 2 != 0 && a % 2 == 0))
	{
		printf("������ ���� ����� ��������\n");
	}
	
	if (a % 2 != 0 && b % 2 != 0) 
	{
		printf("������ �� ����� � � b ��������\n");
	}

	system("pause");
	*/

	/*Task 8
	setlocale(LC_ALL, "");

	int n;

	printf("������� n: ");
	scanf_s("%d", &n);


	if (n % 2 == 0 && n % 7 == 0 && n % 11 != 0 && n % 13 != 0)
	{
		printf("������\n");
	}

	else
	{
		printf("����");
	}

	system("pause");
	*/
	
	/*Task 10
	   setlocale(LC_ALL, "");
	int t, dt, s, d, ts;
	

	printf("������� ����� ���������: ");
	scanf_s("%d", &t);

	printf("����������������� ��������� � �������: ");
	scanf_s("%d", &dt);

	printf("��������� ������ ���������: ");
	scanf_s("%d", &s);

	printf("���� ������ �� 1 �� 7: ");
	scanf_s("%d", &d);

	ts = s * dt;

	if ((t > 8 && t < 22) && (d > 5 && d < 8))
	{
		ts = ts * 0.7;
		printf("��������� ���������: %d\n", ts);
	}

	if (t > 8 && t < 22)
	{
		ts = ts * 0.8;
		printf("��������� ���������: %d\n", ts);
	}

	if (d > 5 && d < 8)
	{
		ts = ts * 0.9;
		printf("��������� ���������: %d\n", ts);
	}

	else
	{
		printf("��������� ���������: %f\n", ts);
	}

	system("pause");
	*/
	
}