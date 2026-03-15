#include <stdio.h>

int main()
{
    int a[50], n, i;
    int min, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min = second = a[0];

    for(i = 0; i < n; i++)
    {
        if(a[i] < min)
        {
            second = min;
            min = a[i];
        }
        else if(a[i] < second && a[i] != min)
        {
            second = a[i];
        }
    }

    printf("Second smallest element = %d", second);

    return 0;
}