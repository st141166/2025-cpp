#include <stdio.h>

double power(double a, int n);

int main(int argc, int argv)
{
    double a = 0.0;
    int n = 0;
    scanf("%lf", &a);
    scanf("%d", &n);
    double ans = power(a, n);
    printf("%lf", ans);
    return 0;
}

double power(double a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n > 0)
    {
        return a * power(a, n - 1);
    }
    else{
        return power(a, n + 1) / a;
    }
}