#include<stdio.h>
int main()
{
    int n ,i,c=0;
    int a=0,b=1;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    if (n<=0){
        return 0;
    }
    printf("%d\n%d\n",a,b);
    for (i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("Fibonacci series is %d\n",c);
        a=b;
        b=c;
    }
    return 0;
}