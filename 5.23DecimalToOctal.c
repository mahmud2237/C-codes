#include<stdio.h>
int main()
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("The Octal of the number is = %o", num);
    getch();
}

/* Octal to decimal
{
    int num;
    printf("Enter a Octal number: ");
    scanf("%o", &num);
    printf("The Decimal of the number is = %d", num);
    getch();
}
*/