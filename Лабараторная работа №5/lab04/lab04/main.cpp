#include<iostream>
void main()
{
	using namespace std;
	float y1, y2, x2, c, f;
	setlocale(LC_CTYPE, "Russian");
	printf("������� x2 =  "); scanf_s("%f", &x2);
	printf("������� y2 =  "); scanf_s("%f", &y2);
	printf("������� y1 =  "); scanf_s("%f", &y1);
	if ((y1 + x2 * y2) < (y2))
		if ((y1 + x2 * y2) < (y1 + x2 + y2))
			c = y1 + x2 * y2;
		else
			c = (y1 + y2 + x2);
	else
		if ((y2) < (y1 + y2 + x2))
			c = (y1 + x2 * y2);
		else
			c = (y1 + y2 + x2);
	f = c + 5;

	printf("���������� = %f \n", f);

	//Z2

	int k;
	puts("������� ���� ���? =");
	cin >> k;
	switch (k)
	{
	case 1: puts("��� 1 ���"); break;
	case 2: puts("��� 2 ����"); break;
	case 3: puts("��� 3 ����"); break;
	case 4: puts("��� 4 ����"); break;
	case 5: puts("��� 5 ���"); break;
	case 6: puts("��� 6 ���"); break;
	case 7: puts("��� 7 ���"); break;
	case 8: puts("��� 8 ���"); break;
	case 9: puts("��� 9 ���"); break;
	}

	int d, n;
	puts("\n ������ ( 1 - �� ������ , ��������-��������� , 2 - �� ������ ��� �����?");
	cin >> d;
	switch (d)
	{
	case 1: puts("������� ������������ � �����"); break;
	case 2: puts("� ���� ���� �������"); break;
	}
	puts("\n ���� �� �� 4 ���� �� ����? ( 1 - ���, ������ ������  , 2 - �� ����� ���");
	cin >> n;
	switch (n)
	{
	case 1: puts("����� ��� ����������"); break;
	case 2: puts("������� ������� - �����������"); break;
	}
	//DOP 5
	printf("\n������� 5");
	float r_4, p_1, q_1, r_3;
	printf("\n������� ������ ����");
	printf("\nr = ");
	scanf_s("%f", &r_4);
	printf("������� ��������� �����");
	printf("\np = ");
	scanf_s("%f", &p_1);
	printf("q = ");
	scanf_s("%f", &q_1);
	r_3 = (p_1 * q_1) / (sqrt(pow(p_1, 2) + pow(q_1, 2)) * 2);
	if (
		(r_4 <= r_3)
		)
		printf("�����");
	else
		printf("�� �����");
	//DOP4
	float a1, b1, p1, q1, r1, s3;
	printf("\n���. 4");
	printf("\n������� ��������� ������� ���������:");
	printf("\n������ = "); scanf_s("%f", &a1);
	printf("\n����� = "); scanf_s("%f", &b1);
	printf("\n������� ��������� ������� ����: ");
	printf("\n������ = "); scanf_s("%f", &p1);
	printf("\n����� = "); scanf_s("%f", &q1);
	printf("\n������� ��������� ������� ����: ");
	printf("\n������ = "); scanf_s("%f", &r1);
	printf("\n����� = "); scanf_s("%f", &s3);
	if (
		(a1 * b1) >= (p1 * q1) + (r1 * s3) &&
		(a1 >= p1 && a1 >= r1) &&
		(b1 >= q1 && b1 >= s3)
		)
		printf("����� ����������");
	else
		printf("������ ����������");

	//DOP 6

	float a, b, c_2, r_2, s, t;
	printf("\n���. 6");
	printf("\n������� ������� �������");
	printf("\na = ");
	scanf_s("%f", &a);
	printf("b = ");
	scanf_s("%f", &b);
	printf("c = ");
	scanf_s("%f", &c_2);
	printf("������� ������� �������");
	printf("\nr = ");
	scanf_s("%f", &r_2);
	printf("s = ");
	scanf_s("%f", &s);
	printf("t = ");
	scanf_s("%f", &t);
	if (
		(a <= r_2 && b <= s && c_2 <= t)
		)
		printf("\n����� ���������");
	else
		printf("\n������ ���������");

}



