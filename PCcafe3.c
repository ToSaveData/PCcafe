#include <math.h>
#include <stdio.h>

int main()
{
    int i, N;
    int sq; // N�� �������� �����ϱ� ����
    int arr[4000], cnt = 0; // N�� ����� �����ϱ� ����

    scanf("%d", &N);

    sq = (int)sqrt(N); // N�� �������� ���Ͽ� sq�� �����Ѵ�.

    for (i = 1; i <= sq; i++)
    {
        if (N % i == 0)
        {
            arr[cnt++] = i; // ������ ����
            if (N / i != i)
                arr[cnt++] = N / i; // ū�� ���� (�������� ���� ���� ���)
        }
    }

    for (i = 0; i < cnt; i++)
    {
        int tmp;
        tmp = arr[i];
        if (tmp > arr[i + 1])
           {
            arr[i] = arr[i + 1];
            arr[i + 1] = tmp;
           }
        
    }

    for (i = 0; i < cnt; i++)
        printf("%d ", arr[cnt]);

    return 0;
}