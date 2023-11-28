#include <stdio.h>

int main()
{
    int n, num=0;

    /* Input a number from user */
    printf("Enter any number to find sum of its digit: ");
    scanf("%d", &n);
    
    /* Find last digit of num and add to sum */
    num = n % 10;

    printf("%d digits", num);

    return 0;
}