#include<stdio.h>
int main()
{
    char lower;
    printf("Enter any lowercase letter: ");
    scanf("%c", &lower);

    printf("The uppercase letter is: %c", lower-32);
    return 0;
}