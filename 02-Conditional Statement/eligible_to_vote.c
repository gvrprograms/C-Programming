#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d",&age);
    if(age>=18)
    printf("PERSON IS ELIGIBLE TO VOTE");
    else
    printf("PERSON IS NOT ELIGIBLE TO VOTE");
    return 0;
}