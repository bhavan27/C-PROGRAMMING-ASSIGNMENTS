#include <stdio.h>

int main()
{
    int total, staff, non_teaching, students;

    printf("Enter total users: ");
    scanf("%d", &total);

    printf("Enter staff users: ");
    scanf("%d", &staff);

    non_teaching = staff / 3;

    students = total - staff - non_teaching;

    printf("Student Users: %d", students);

    return 0;
}