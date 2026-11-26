//Alphabet pattern...
#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 4; j++)
        {
            printf("%c ", 64 + j);
        }
        printf("\n");
    }
    printf("Thank You!");

    return 0;
}