#include <stdio.h>

int phi(int n);

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    int ans = phi(n);
    printf("%d", ans);
    return 0;
}

int phi(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return phi(n-2) + phi(n-1);
    }
}