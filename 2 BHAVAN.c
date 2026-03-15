#include <stdio.h>

int main()
{
    int num, d, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        d = num % 10;
        reverse = reverse * 10 + d;
        num = num / 10;
    }

    printf("Reversed number = %d", reverse);

    return 0;
}