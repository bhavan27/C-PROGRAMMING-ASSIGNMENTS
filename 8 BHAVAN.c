#include <stdio.h>

int main()
{
    int P, Q, R, i, d, temp;

    printf("Enter P Q R: ");
    scanf("%d %d %d", &P, &Q, &R);

    printf("Numbers are = ");

    for(i = P; i <= Q; i++)
    {
        temp = i;

        while(temp > 0)
        {
            d = temp % 10;

            if(d == R)
                break;

            temp = temp / 10;
        }

        if(temp > 0)
            continue;

        printf("%d ", i);
    }

    return 0;
}