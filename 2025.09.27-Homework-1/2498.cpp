#include <cstdio>

int main(int arsc, char** arsv)
{
    long long n = 0;
    long long ans = 0;
    scanf("%lld", &n);
    ans = ((n + 1) / 2) * ((n + 1) / 2);
    printf("%lld", ans);
    return 0;
}