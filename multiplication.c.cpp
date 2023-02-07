#include<stdio.h>
int main()
{
    int n,m, i;
    printf("Enter a value of n: ");
    scanf("%d", &n);
     printf("Enter a value of m: ");
    scanf("%d", &m);
    for (i = 1; i <= m; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}
