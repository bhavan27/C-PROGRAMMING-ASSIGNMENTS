#include <stdio.h>

int main()
{
    int a[50], n, d, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter number of rotations: ");
    scanf("%d", &d);

    for(i = 0; i < d; i++)
    {
        temp = a[0];

        for(j = 0; j < n-1; j++)
            a[j] = a[j+1];

        a[n-1] = temp;
    }

    printf("Array after rotation: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}