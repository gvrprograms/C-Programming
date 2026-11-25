#include<stdio.h>
int main()
{
int a,b,c,large;
printf("Enter a: ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d",&b);
printf("Enter c: ");
scanf("%d",&c);
large= (a>b ) ?((a>c)? a:c): ((b>c) ? b:c);
printf("Largest number among three variable is =  %d\n",large);
printf("Thank You!");
return 0; 
}