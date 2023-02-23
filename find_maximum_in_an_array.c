#include <stdio.h>
void printmin(int *a, int temp)
{

    printf("minimum is %d\n", a[0]);
}
void printmax(int *a, int temp)
{

    printf("max is %d\n", a[temp - 1]);
}
void sort(int *a, int temp)
{
    for (int i = 0; temp - 1 > i; i++)
    {
        for (int j = 0; temp - i - 1 > j; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tp;
            }
        }
    }
}

int main()
{
    int n, temp;
    scanf("%d", &n);
    temp = n;
    int a[temp];
    for (int i = 0; n > i; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, n);
    printmax(a, n);
    printmin(a, n);
}