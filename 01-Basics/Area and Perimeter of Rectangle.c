#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    printf("Enter a : ");
    scanf("%f",&a);
    printf("Enter b : ");
    scanf("%f",&b);
    float area = a*b;
    printf("Area of Rectangle is  %f\n",area);

    float perimeter = 2*(a+b);
    printf("perimeter of rectangle is  %f",perimeter);
    return 0;
    

}