#include <stdio.h>
int main()
{
    int n, m, i, gcd, lcm;

    printf("");
    scanf("%d %d", &n, &m);

    for(i=1; i <= n && i <= m; ++i)
    {
        // Checks if i is factor of both integers
        if(n%i==0 && m%i==0)
            gcd = i;
    }

    lcm = (n * m)/ gcd;

    printf("The LCM of %d and %d is %d", n, m, lcm);

    return 0;
}