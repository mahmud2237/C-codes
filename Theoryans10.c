#include <stdio.h>

int main()
{
    int i, num, isPrime;
    /* Input a number from user */
    printf("Enter any number to check prime: ");
    scanf("%d", &num);
    /*
     * isPrime is used as flag variable. 
     * If isPrime = 0, then number is composite
     * else if isPrime = 1, then number is prime.
     * Initially I have assumed the number as prime.
     */
    isPrime = 1; 
    for(i=2; i<=num/2; i++)
    {
        /* Check divisibility of num */
        if(num%i==0)
        {
            /* Set isPrime to 0 indicating it as composite number */
            isPrime = 0;

            /* Terminate from loop */
            break;
        }
    }

    /*
     * If isPrime contains 1 then it is prime
     */
    if(isPrime == 1 && num > 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Composite");
    }

    return 0;
}