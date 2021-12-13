#include <stdio.h>

int main()
{
    int a = 0, b = 0, flag = 0;
    int arr[100][100];
    scanf("%d%d", &a, &b);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 1; i < a - 1; i++)
    {
        for (int j = 1; j < b - 1; j++)
        {
            if (arr[i][j] > arr[i][j - 1] && arr[i][j] > arr[i][j + 1] && arr[i][j] > arr[i - 1][j] && arr[i][j] > arr[i + 1][j])
            {
                printf("%d %d %d\n", arr[i][j], i+1, j+1);
                flag = flag + 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("None %d %d\n", a, b);
    }
}
