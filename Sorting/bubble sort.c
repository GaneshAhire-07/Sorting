#include <stdio.h>
void bsort(int a[], int n)
{
    int flag = 1, t;
    for (int pass = 1; pass < n && flag == 1; pass++)
    {
        flag = 0;
        for (int i = 0; i < n - pass; i++)
        {
            if (a[i] > a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
                flag = 1;
            }
        }
    }
}
int main()
{
    int a[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    bsort(a, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}