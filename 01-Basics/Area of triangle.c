#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;

    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    printf("Enter c: ");
    scanf("%f", &c);

    float s = (a + b + c) / 2.0;

    float area;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of triangle = %f", area);

    return 0;
}