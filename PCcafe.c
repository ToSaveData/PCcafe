#include <stdio.h>

int main()
{
	int n, m, a, i, sum1 = 0, sum2 = 0;
	int arr[41] = { 0 };

	printf("������ ���� n(1 <= n <= 40): ");
	scanf_s("%d", &n);
	if (1 > n || n > 40)
	{
		printf("input error");
		return 0;
	}

	printf("\n���� n�� �Է�: ");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a);
		arr[i] = a;
	}

	printf("\n����� ����� ���� ����m(1 <= m <= 100: ");
	scanf_s("%d", &m);
	if (1 > m || m > 100)
	{
		printf("input error");
		return 0;
	}
		

	for (i = 0; i < n; i++)
	{
		if (m % arr[i] == 0)
		{
			sum1 += arr[i];
		}
		
		if (arr[i] % m == 0 && (arr[i] / m) >= 0)
		{
			sum2 += arr[i];
		}
	}

	printf("\n����� ��: %d \n", sum1);
	printf("����� ��: %d \n", sum2);


	return 0;
}
