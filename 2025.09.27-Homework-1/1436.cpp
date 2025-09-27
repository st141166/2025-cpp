#include <cstdio>

int main(int arsc, char** arsv)
{
    long long a = 0;
    long long b = 0;
    long long q = 0;
    long long abs_b = 0;
    int sign = 0;
    scanf("%lld", &a);
    scanf("%lld", &b);
    sign = (b > 0) - (b < 0);
    abs_b = sign * b;
    q = (a % b + abs_b) % abs_b;
    printf("%lld", q);
    return 0;
}