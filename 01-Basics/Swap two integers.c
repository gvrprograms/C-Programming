#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("New number is a = %d\n", a);
    printf("New number is b = %d\n", b);

    return 0;
}