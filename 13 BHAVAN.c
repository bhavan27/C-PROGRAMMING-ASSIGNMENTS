#include <stdio.h>

int main()
{
    int M, N, i;

    printf("Enter M and N: ");
    scanf("%d %d", &M, &N);

    printf("All Odd Numbers = ");
    for(i = M+1; i < N; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d ", i);
        }
    }

    printf("\nAll Even Numbers = ");
    for(i = M+1; i < N; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}