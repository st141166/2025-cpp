#include <stdio.h>

long long binom_coef(int n, int k);

int main(int argc, char** argv)
{
    int n = 0;
    int k = 0;
    scanf("%d", &n);
    scanf("%d", &k);
    long long ans = binom_coef(n, k);
    printf("%lld", ans);
    return 0;
}

long long binom_coef(int n, int k)
{
    if ((k == 0) || (k == n))
    {
        return 1;
    }
    else
    {
        return binom_coef(n - 1, k - 1) + binom_coef(n - 1, k);
    }
}