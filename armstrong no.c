#include <stdio.h>
int main()
{
    int n, Number, r, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &n);

    Number = n;

    while (Number != 0)
    {
        r = Number%10;
        result += r*r*r;
        Number /= 10;
    }

    if(result == n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    return 0;
}
