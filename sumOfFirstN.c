#include <stdio.h>
int main()
{
    int i, n, s = 0;
    printf("Enter a +ve number:");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        s += i;
    }
    printf("Sum of first %d numbers is %d\n", n, s);
    return 0;
}