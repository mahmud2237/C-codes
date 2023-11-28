#include<stdio.h>
int main()
{
    int a;
    printf("Enter the first number: ");
    scanf("%d", &a);
    int b;
    printf("Enter the second number: ");
    scanf("%d", &b);
    if(b%a==0 && a<b)
    {
        printf("The second number is divisible by the first number.");
        
    }
    else
    {
        printf("None of them are divisible by the other. ");      
    }
    return 0;
}