#include<iostream>

int main()
{
	system("chcp 1251");
	system("cls");

	int n, st = -1;
	double s = 0, x;
	do
	{
		printf("¬ведите целое число n > 0 и x\n");
		scanf_s("%d\n%lf", &n, &x);
	} while (n <= 0);

	double term = 1 - 3 * x;

	for (int i = 1; i <= n; i++)
	{
		st *= -1;
		s += st * ((2.0 - i) / term);
	}
	printf("%.3lf", s);

	return 0;
}