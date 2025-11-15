#include <stdio.h>

double power(double a, int n);

int main(int argc, char** argv)
{
    double a = 0.0;
    int n = 0;
    scanf("%lf", &a);
    scanf("%d", &n);
    printf("%lf", power(a, n));
    return 0;
}

double power(double a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        double half = power(a, n / 2);
        return half * half;
    }
    else
    {
        return a * power(a, n - 1);
    }
}