#include <stdio.h>

int partition(int x[], int lb, int ub)
{
    int down, up, pivot, t;
    down = lb;
    up = ub;
    pivot = x[lb];

    while (down < up)
    {
        while (x[down] <= pivot)
            down++;
        while (x[up] > pivot)
            up--;
        if (down < up)
        {
            t = x[down];
            x[down] = x[up];
            x[up] = t;
        }
    }
    t = x[up];
    x[up] = x[lb];
    x[lb] = t;
    return up;
}

void quicksort(int x[], int lb, int up)
{
    int j;
    if (lb < up)
    {
        j = partition(x, lb, up);
        quicksort(x, lb, j - 1);
        quicksort(x, j + 1, up);
    }
}

int main()
{
    int a[100], n, i;
    printf("how many values: ");
    scanf("%d", &n);
    printf("enter %d values: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    quicksort(a, 0, n - 1);
    printf("sorted values:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
