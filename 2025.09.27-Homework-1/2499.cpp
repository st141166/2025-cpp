#include <cstdio>

int main(int arsc, char** arsv)
{
    long long n = 0;
    long long m = 0;
    long long steps = 0;
    scanf("%lld", &n);
    scanf("%lld", &m);
    steps = (n - 1) * (m - 1) + 1;
    printf("%lld", steps);
    return 0;
}