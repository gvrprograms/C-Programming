#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Number between 1 to 7: ");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
        printf("Its Sunday!!\n");
        break;
        case 2:
        printf("Its Monday\n");
        break;
        case 3:
        printf("Its Tuesday\n");
        break;
        case 4:
        printf("Its Wednesday\n");
        break;
        case 5:
        printf("Its Thursday\n");
        break;
        case 6:
        printf("Its Friday\n");
        break;
        case 7:
        printf("Its Saturday!\n");
        break;
        default:
        printf("Better luck !!\n");
    }
    printf("Thank You!");
    return 0;
}