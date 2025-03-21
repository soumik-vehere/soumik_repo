#include <stdio.h>
int main()
{
    int i, n, sum1 = 0, sum2 = 0;
    printf("Enter a +ve number:");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        sum1 += i;
        sum2 += i*i;
    }
    printf("Sum of first %d numbers is %d\n", n, sum1);
    printf("Sum of square of first %d numbers is %d\n", n, sum2);
    return 0;
}