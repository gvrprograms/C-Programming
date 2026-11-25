#include<stdio.h>
int main()
{
char choice;
printf("Enter choice: ");
scanf("%c",&choice);
switch(choice){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf("Given character is vowel\n");
    break;
    default :
    printf("Given character is consonant \n");
}
printf("Thank You!");
return 0;
}