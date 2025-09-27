#include <cstdio>

int main(int arsc, char** arsv)
{
    long long a = 0;
    long long squared = 0;
    scanf("%lld", &a);
    squared = (a / 10) * (a / 10 + 1) * 100 + 25;
    printf("%lld", squared);
    return 0;
}