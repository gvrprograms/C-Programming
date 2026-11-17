#include <stdio.h>
#include <math.h>

int main()
{
    float P, R, T;

    printf("Enter Principal amount P: ");
    scanf("%f", &P);

    printf("Enter Rate R: ");
    scanf("%f", &R);

    printf("Enter Time in years T: ");
    scanf("%f", &T);

    float S = (P * R * T) / 100;

    printf("Simple Interest is = %.2f", S);

    return 0;
}