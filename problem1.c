#include<stdio.h>

int main()
{
    printf("Enter radius: ");

    double radius;
    scanf("%lf",&radius);

    const double pi = 3.1416;
    double perimeter = 2 * pi * radius;
    printf("perimeter = %.2lf\n",perimeter);

    double area = pi * radius * radius;

    printf("area = %.2lf\n", area);

    return 0;
}

