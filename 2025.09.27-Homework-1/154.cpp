#include <cstdio>

int main(int arsc, char** arsv)
{
    int x = 0;
    int tens = 0;
    scanf("%d", &x);
    tens = x / 10 % 10;
    printf("%d", tens);
    return 0;
}