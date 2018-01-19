#include <stdio.h>
int main()
{
    int n, N0, r, res= 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &n);

    Number = n;

    while (No != 0)
    {
        r = No%10;
        res += r*r*r;
        No /= 10;
    }

    if(res == n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    return 0;
}
