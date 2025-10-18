#include <cstdio>

int main (int argc, char** argv)
{
    double x = 0;
    double y = 0;
    int k = 1;
    scanf("%lf", &x);
    scanf("%lf", &y);

    while (x < y - 1e-9)
    {
        x *= 1.15;
        k++;
    }
    
    printf("%d", k);
    return 0;
}