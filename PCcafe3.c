#include <math.h>
#include <stdio.h>

int main()
{
    int i, N;
    int sq; // N의 제곱근을 저장하기 위해
    int arr[4000], cnt = 0; // N의 약수를 저장하기 위해

    scanf("%d", &N);

    sq = (int)sqrt(N); // N의 제곱근을 구하여 sq에 저장한다.

    for (i = 1; i <= sq; i++)
    {
        if (N % i == 0)
        {
            arr[cnt++] = i; // 작은수 저장
            if (N / i != i)
                arr[cnt++] = N / i; // 큰수 저장 (작은수와 같지 않을 경우)
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