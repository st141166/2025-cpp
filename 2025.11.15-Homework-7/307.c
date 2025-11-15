#include <stdio.h>

double power(double a, int n);

int main(int argc, char** argv)
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
    double pw = 1.0;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 0; i < n; ++i)
        {
            pw *= a;
        }
        return pw;
    }
}