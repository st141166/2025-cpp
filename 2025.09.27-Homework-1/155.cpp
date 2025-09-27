#include <cstdio>

int main(int arsc, char** arsv)
{
    int x = 0;
    int sm = 0;
    scanf("%d", &x);
    sm = x % 10 + x / 10 % 10 + x / 100;
    printf("%d", sm);
    return 0;
}