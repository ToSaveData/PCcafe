#include <stdio.h>

int main()
{
	int n, m, a, i, sum1 = 0, sum2 = 0;
	int arr[41] = { 0 };

	printf("정수의 갯수 n(1 <= n <= 40): ");
	scanf_s("%d", &n);
	if (1 > n || n > 40)
	{
		printf("input error");
		return 0;
	}

	printf("\n정수 n개 입력: ");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a);
		arr[i] = a;
	}

	printf("\n약수와 배수를 구할 정수m(1 <= m <= 100: ");
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

	printf("\n약수의 합: %d \n", sum1);
	printf("배수의 합: %d \n", sum2);


	return 0;
}
