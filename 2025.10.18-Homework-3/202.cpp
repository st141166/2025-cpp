#include <cstdio>
#include <cmath>

int main (int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    for (int x = -100; x <= 100; ++x)
    {
        if ((a * pow(x, 3) + b * pow(x, 2) + c * x + d) == 0)
        {
            printf("%d ", x);
        }
    }
    return 0;
}