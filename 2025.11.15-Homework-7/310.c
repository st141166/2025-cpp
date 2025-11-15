#include <stdio.h>
#include <math.h>

void is_prime(long long n);

int main(int argc, char** argv)
{
    long long n;
    scanf("%lld", &n);
    is_prime(n);
    return 0;
}

void is_prime(long long n)
{
    if (n == 2)
    {
        printf("prime");
        return;
    }
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            printf("composite");
            return;
        }
    }
    printf("prime");
}