#include <stdio.h>

int main()
{
	int N, K, i, num = 0;
	int arr[1000] = { 0 };

	scanf_s("%d %d", &N, &K);
	if (N > 10000 || N < 1 || K < 1 || K > N)
	{
		printf("input error");
		return 0;
	}
	
	for (i = 0; i < N; i++)
	{
		if (N % i == 0)
		{
			arr[num] = i;
			num++;
		}
	}

	for(i=0;i<num;i++)
		printf("%d\n", arr[num]);

	//if (K < num)
	//	printf("%d", arr[K]);
	//else
	//	printf("0");

	return 0;
}
