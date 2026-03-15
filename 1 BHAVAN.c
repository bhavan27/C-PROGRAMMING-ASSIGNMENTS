#include <stdio.h>
int main()
{
    int x, n, choice, i;
    int result = 1;
    printf("Enter two numbers (x and n): ");
    scanf("%d %d", &x, &n);
    printf("Choose operation:\n");
    printf("1 Add(x,n)\n");
    printf("2 Sub(x,n)\n");
    printf("3 Mul(x,n)\n");
    printf("4 Div(x,n)\n");
    printf("5 Pow(x,n)\n");

    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Result = %d", x + n);
    }
    else if(choice == 2)
    {
        printf("Result = %d", x - n);
    }
    else if(choice == 3)
    {
        printf("Result = %d", x * n);
    }
    else if(choice == 4)
    {
        if(n != 0)
            printf("Result = %d", x / n);
        else
            printf("Division by zero not allowed");
    }
    else if(choice == 5)
    {
        for(i = 1; i <= n; i++)
        {
            result = result * x;
        }
        printf("Result = %d", result);
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}