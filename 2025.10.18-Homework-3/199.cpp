#include <cstdio>

int main (int argc, char**)
{
    int a = 0;
    int b = 0;
    int gcd = 0;
    int lcm = 0;
    scanf("%d", &a);
    scanf("%d", &b);

    lcm = (a * b);
    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    gcd = a > b ? a : b;
    lcm = lcm / gcd;

    printf("%d", lcm);
    return 0;
}