#include <stdio.h>

int min(int a, int b, int c, int d);

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    int ans = min(a, b, c, d);
    printf("%d", ans);
    return 0;
}

int min(int a, int b, int c, int d)
{
    if ((a <= b) && (a <= c) && (a <= d))
    {
        return a;
    }
    else if ((b <= a) && (b <= c) && (b <= d))
    {
        return b;
    }
    else if ((c <= a) && (c <= b) && (c <= d))
    {
        return c;
    }
    else
    {
        return d;
    }
}