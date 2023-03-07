#include<iostream>
void main()
{
	using namespace std;
	float y1, y2, x2, c, f;
	setlocale(LC_CTYPE, "Russian");
	printf("Введите x2 =  "); scanf_s("%f", &x2);
	printf("Введите y2 =  "); scanf_s("%f", &y2);
	printf("Введите y1 =  "); scanf_s("%f", &y1);
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

	printf("Наименьшее = %f \n", f);

	//Z2

	int k;
	puts("Сколько тебе лет? =");
	cin >> k;
	switch (k)
	{
	case 1: puts("Мне 1 год"); break;
	case 2: puts("Мне 2 года"); break;
	case 3: puts("Мне 3 года"); break;
	case 4: puts("Мне 4 года"); break;
	case 5: puts("Мне 5 лет"); break;
	case 6: puts("Мне 6 лет"); break;
	case 7: puts("Мне 7 лет"); break;
	case 8: puts("Мне 8 лет"); break;
	case 9: puts("Мне 9 лет"); break;
	}

	int d, n;
	puts("\n Привет ( 1 - Ну привет , дружочек-пирожочек , 2 - Ты вообще кто чувак?");
	cin >> d;
	switch (d)
	{
	case 1: puts("Полегче разговаривай с отцом"); break;
	case 2: puts("Я твой отец дурачек"); break;
	}
	puts("\n Сдал ли ты 4 лабу по ОАИП? ( 1 - Нет, полный провал  , 2 - Да очень изи");
	cin >> n;
	switch (n)
	{
	case 1: puts("Месяц без компьютера"); break;
	case 2: puts("Молодец сыночек - трехочковый"); break;
	}
	//DOP 5
	printf("\nВариант 5");
	float r_4, p_1, q_1, r_3;
	printf("\nВведите радиус шара");
	printf("\nr = ");
	scanf_s("%f", &r_4);
	printf("Введите диагонали ромба");
	printf("\np = ");
	scanf_s("%f", &p_1);
	printf("q = ");
	scanf_s("%f", &q_1);
	r_3 = (p_1 * q_1) / (sqrt(pow(p_1, 2) + pow(q_1, 2)) * 2);
	if (
		(r_4 <= r_3)
		)
		printf("Может");
	else
		printf("Не может");
	//DOP4
	float a1, b1, p1, q1, r1, s3;
	printf("\nДоп. 4");
	printf("\nВведите параметры участка застройки:");
	printf("\nШирина = "); scanf_s("%f", &a1);
	printf("\nДлина = "); scanf_s("%f", &b1);
	printf("\nВведите параметры первого дома: ");
	printf("\nШирина = "); scanf_s("%f", &p1);
	printf("\nДлина = "); scanf_s("%f", &q1);
	printf("\nВведите параметры второго дома: ");
	printf("\nШирина = "); scanf_s("%f", &r1);
	printf("\nДлина = "); scanf_s("%f", &s3);
	if (
		(a1 * b1) >= (p1 * q1) + (r1 * s3) &&
		(a1 >= p1 && a1 >= r1) &&
		(b1 >= q1 && b1 >= s3)
		)
		printf("Можно разместить");
	else
		printf("Нельзя разместить");

	//DOP 6

	float a, b, c_2, r_2, s, t;
	printf("\nДоп. 6");
	printf("\nВведите размеры коробки");
	printf("\na = ");
	scanf_s("%f", &a);
	printf("b = ");
	scanf_s("%f", &b);
	printf("c = ");
	scanf_s("%f", &c_2);
	printf("Введите размеры посылки");
	printf("\nr = ");
	scanf_s("%f", &r_2);
	printf("s = ");
	scanf_s("%f", &s);
	printf("t = ");
	scanf_s("%f", &t);
	if (
		(a <= r_2 && b <= s && c_2 <= t)
		)
		printf("\nМожно упаковать");
	else
		printf("\nНельзя упаковать");

}



