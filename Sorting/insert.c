#include <stdio.h>

void isort(int x[], int n)
{
    int upos, spos, newelement;
    for (upos = 1; upos < n; upos++)
    {
        newelement = x[upos];
        spos = upos - 1;
        while (x[spos] > newelement && spos >= 0)
        {
            x[spos + 1] = x[spos];
            spos = spos - 1;
        }
        x[spos + 1] = newelement;
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

    isort(a, n);

    printf("sorted values:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
