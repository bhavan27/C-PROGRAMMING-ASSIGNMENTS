#include <stdio.h>

int main()
{
    int age, years;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("Eligible for voting");
    }
    else
    {
        years = 18 - age;
        printf("Not eligible for voting\n");
        printf("You can vote after %d years", years);
    }

    return 0;
}