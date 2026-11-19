#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    printf("Natural number between 1 to n are \n");
    for (int i=1;i<=n;i++)
    {
       
        printf("%d\n",i);
    }
    return 0;
}