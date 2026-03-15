#include <stdio.h>

int main()
{
    int P, T, R;
    char ch;
    int SI;

    printf("Enter the principal amount: ");
    scanf("%d", &P);

    printf("Enter the no of years: ");
    scanf("%d", &T);

    printf("Is customer senior citizen (y/n): ");
    scanf(" %c", &ch);

    if(ch == 'y')
        R = 12;
    else
        R = 10;

    SI = (P * R * T) / 100;

    printf("Interest: %d", SI);

    return 0;
}